solve :: [Int] -> Int
solve [n, m] = p * s
  where
    p = 2 ^ m
    s = (n - m) * 100 + m * 1900

main :: IO ()
main = interact (show . solve . parse)
  where
    parse = map read . words
