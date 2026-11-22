local root = "."
local atcoder = root .. "/atcoder"
local cf = root .. "/codeforces"

local TYPICAL90_NUMERIC = true -- true: 001.cpp | false: A.cpp

local function sanitize(s)
	return (s or "unknown"):gsub("[^%w]+", "_"):gsub("^_+", ""):gsub("_+$", "")
end

local function lower(l)
	return l:lower()
end
local function upper(l)
	return l:upper()
end

-- a=1 .. z=26, aa=27 .. cl=90 (bijective base 26)
local function typical90(l)
	if not TYPICAL90_NUMERIC then
		return l:upper()
	end
	local n = 0
	for ch in l:lower():gmatch(".") do
		n = n * 26 + (ch:byte() - 96)
	end
	return ("%03d"):format(n)
end

local atcoder_rules = {
	{ pat = "^abc%d+$", dir = "abc", nested = true, renshu = true },
	{ pat = "^arc%d+$", dir = "arc", nested = true, renshu = true },
	{ pat = "^agc%d+$", dir = "agc", nested = true, renshu = true },
	{ pat = "^ahc%d+$", dir = "ahc", nested = true, renshu = true },
	{ pat = "^adt_", dir = "adt", nested = true },
	{ pat = "^awc", dir = "awc", nested = true },
	{ pat = "^dp$", dir = "dp" },
	{ pat = "^tessoku", dir = "tessoku", name = upper },
	{ pat = "^typical90$", dir = "typical90", name = typical90 },
}

local function parse_atcoder(contest, tid)
	local letter = tid:match("([^_]+)$") or tid

	for _, r in ipairs(atcoder_rules) do
		if contest:match(r.pat) then
			local dir = atcoder .. "/" .. r.dir
			local file = (r.name or lower)(letter)
			if r.nested then
				dir = dir .. "/" .. contest
			end

			local info = {
				contest_dir = dir,
				contest_file = file,
				problem_dir = dir,
				problem_file = file,
			}
			if r.renshu then
				info.problem_dir = atcoder .. "/renshu"
				info.problem_file = (tid:gsub("_", "")):lower()
			end
			return info
		end
	end

	return {
		contest_dir = atcoder .. "/renshu/" .. contest,
		contest_file = letter:lower(),
		problem_dir = atcoder .. "/renshu",
		problem_file = tid:lower(),
	}
end

local function parse_codeforces(c, p)
	p = p:upper()
	local sheet = vim.g.cp_cf_sheet or "renshu"
	return {
		contest_dir = cf .. "/" .. c,
		contest_file = p,
		problem_dir = cf .. "/" .. sheet,
		problem_file = c .. p,
	}
end

local function parse(task)
	if not task or not task.url then
		return nil
	end
	local url = task.url

	local contest, tid = url:match("atcoder%.jp/contests/([^/]+)/tasks/([^/?#]+)")
	if contest then
		return parse_atcoder(contest, tid)
	end

	local c, p = url:match("codeforces%.com/[^/]+/(%d+)/problem/(%w+)")
	if not c then
		c, p = url:match("codeforces%.com/problemset/problem/(%d+)/(%w+)")
	end
	if c then
		return parse_codeforces(c, p)
	end
end

return {
	received_files_extension = "cpp",

	-- Set to true if you want to confirm/edit the generated path in the cmdline before saving
	received_problems_prompt_path = true,
	received_contests_prompt_directory = true,
	received_contests_prompt_extension = false,

	-- `:CompetiTest receive problem`
	received_problems_path = function(task, ext)
		local i = parse(task)
		if not i then
			return ("%s/misc/%s.%s"):format(root, sanitize(task.name), ext)
		end
		return ("%s/%s.%s"):format(i.problem_dir, i.problem_file, ext)
	end,

	-- `:CompetiTest receive contest` (receives a LIST of tasks, so use tasks[1])
	received_contests_directory = function(tasks)
		local i = parse(tasks[1])
		return i and i.contest_dir or (root .. "/misc")
	end,
	received_contests_problems_path = function(task, ext)
		local i = parse(task)
		return ((i and i.contest_file) or sanitize(task.name)) .. "." .. ext
	end,

	template_file = { cpp = root .. "/start.cpp" },

	testcases_directory = ".tc",
	testcases_use_single_file = true,
	testcases_single_file_format = "$(FNOEXT).testcases",
	compile_command = {
		cpp = {
			exec = "g++",
			args = {
				"-std=c++23",
				"-I/usr/local/include",
				"-O2",
				"-Wall",
				"-Wextra",
				"-DLOCAL",
				"$(FNAME)",
				"-o",
				"./a.out",
			},
		},
	},
	run_command = {
		cpp = { exec = "./a.out" },
	},
	maximum_time = 3000,
}
