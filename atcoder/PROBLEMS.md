# 中央問題一覧表

自分用にたやすく探索できるように、解けるか解けなかったかの問題を表にします。コンテストで探索もできて、種類でもできるようにしたいです。

種類のまとめ:

| JP             | EN                            |
| -------------- | ----------------------------- |
| 実装           | Implementation / Simulation   |
| 全探索         | Brute Force                   |
| ビット全探索   | Bitmask Brute Force           |
| ビット演算     | Bit Manipulation              |
| 半分全列挙     | Meet in the Middle            |
| 配列           | Array                         |
| 文字列         | Strings                       |
| 連想配列       | Associative Array / Hash Maps |
| 連結リスト     | Linked List                   |
| 行列           | Matrices                      |
| 動的計画法     | Dynamic Programming           |
| 最短経路       | Shortest Path                 |
| 尺取り法       | Two Pointer / Sliding Window  |
| 考察           | AdHoc / Observation           |
| オフライン処理 | Offline Processing            |
| セグメント木   | Segment Tree                  |
| 貪欲法         | Greedy                        |
| 組み合わせ     | Combinatorics                 |
| 数学           | Maths Theory                  |
| 幾何学         | Geometric Theory              |
| ゲーム         | Games                         |
| 再帰           | Recursion                     |
| 構造的         | Constructive                  |

## ABC

| ID        | 名前                                 | 種類                   | ステータス | 難易度 |                                 リンク                                  |
| --------- | ------------------------------------ | ---------------------- | :--------: | :----: | :---------------------------------------------------------------------: |
| `abc023b` | 手芸王                               | 実装                   |     UP     |  570   |                  [リンク](./renshu/abc023b_手芸王.cpp)                  |
| `abc038c` | 単調増加                             | 尺取り法               |     UP     |  894   |                 [リンク](./renshu/abc038c_単調増加.cpp)                 |
| `abc040c` | 柱柱柱柱柱                           | 1DDP                   |     UP     |  896   |                [リンク](./renshu/abc040c_柱柱柱柱柱.cpp)                |
| `abc054b` | Template Matching                    | 行列・実装             |     UP     |  893   |            [リンク](./renshu/abc054b_template_matching.cpp)             |
| `abc055c` | Scc Puzzle                           | 考察                   |     UP     |  561   |                [リンク](./renshu/abc055c_scc_puzzle.cpp)                |
| `abc064c` | Colorful Leaderboard                 | 考察                   |     UP     |  559   |           [リンク](./renshu/abc064c_colorful_leaderboard.cpp)           |
| `abc072c` | Together                             | 連想配列               |     UP     |  407   |                 [リンク](./renshu/abc072c_together.cpp)                 |
| `abc094c` | Many Medians                         | 配列・連想配列         |     UP     |  566   |               [リンク](./renshu/abc094c_many_medians.cpp)               |
| `abc096c` | Grid Repainting 2                    | 行列                   |     UP     |  407   |            [リンク](./renshu/abc096c_grid_repainting_2.cpp)             |
| `abc150c` | Count Order                          | 全探索                 |     UP     |  422   |               [リンク](./renshu/abc150c_count_order.cpp)                |
| `abc160d` | Line++                               | 最短経路               |     UP     |  879   |                   [リンク](./renshu/abc160d_line.cpp)                   |
| `abc171c` | One Quadrillion and One Dalmatians   | 数学                   |     UP     |  560   |         [リンク](./renshu/abc171c_one_quadrillion_and_one.cpp)          |
| `abc189c` | Mandarin Orange                      | 全探索                 |     UP     |  565   |             [リンク](./renshu/abc189c_mandarin_orange.cpp)              |
| `abc198c` | Compass Walking                      | 数学                   |     UP     |  413   |             [リンク](./renshu/abc198c_compass_walking.cpp)              |
| `abc212b` | Weak Password                        | 実装                   |     AC     |   64   |         [リンク](./adt/adt_all_20261105_1/d_weak_password.cpp)          |
| `abc213b` | Booby Prize                          | 配列                   |     UP     |   26   |          [リンク](./adt/adt_all_20261006_2/d_booby_prize.cpp)           |
| `abc214a` | Next Generation ABC                  | 実装                   |     AC     |   4    |       [リンク](./adt/adt_all_20261009_1/a_new_generation_abc.cpp)       |
| `abc214b` | How Many                             | 全探索                 |     AC     |   53   |            [リンク](./adt/adt_all_20261001_2/c_how_many.py)             |
| `abc215b` | log2(N)                              | 数学                   |     AC     |   68   |             [リンク](./adt/adt_all_20261028_2/c_log2_n.cpp)             |
| `abc215d` | Coprime 2                            | 数学                   |            |  736   |           [リンク](./adt/adt_all_20261021_2/g_coprime_2.cpp)            |
| `abc217a` | Lexicographic Order                  | 実装                   |     AC     |   21   |      [リンク](./adt/adt_all_20261028_2/a_lexicographic_order.cpp)       |
| `abc217b` | AtCoder Quiz                         | 実装                   |     AC     |   22   |          [リンク](./adt/adt_all_20261006_1/d_atcoder_quiz.cpp)          |
| `abc218a` | Weather Forecast                     | 実装                   |     AC     |   7    |        [リンク](./adt/adt_all_20261008_2/a_weather_forecast.cpp)        |
| `abc218c` | Shapes                               | 行列・実装             |     UP     |  1012  |             [リンク](./adt/adt_all_20261030_1/f_shapes.cpp)             |
| `abc220d` | FG Operation                         | 2DDP                   |     UP     |  664   |          [リンク](./adt/adt_all_20261028_2/g_fg_operation.cpp)          |
| `abc221b` | typo                                 | 全探索                 |     AC     |   58   |              [リンク](./adt/adt_all_20261002_2/c_typo.cpp)              |
| `abc224a` | Tires                                | 実装・文字列           |     AC     |   6    |             [リンク](./adt/adt_all_20261008_1/a_tires.cpp)              |
| `abc225a` | Distinct Strings                     | 全探索                 |     AC     |   12   |        [リンク](./adt/adt_all_20261112_1/b_distinct_strings.cpp)        |
| `abc225c` | Calendar Validator                   | 行列                   |     AC     |  326   |       [リンク](./adt/adt_all_20260928_1/e_calendar_validator.cpp)       |
| `abc228b` | Takahashi's Secret                   | グラフ                 |     AC     |   83   |       [リンク](./adt/adt_all_20261013_1/d_takahashis_secret.cpp)        |
| `abc228d` | Linear Probing                       | 二分探索               |     UP     |  1035  |         [リンク](./adt/adt_all_20261006_1/g_linear_probing.cpp)         |
| `abc230b` | Triple Metre                         | 実装・文字列           |     AC     |   37   |          [リンク](./adt/adt_all_20261012_2/d_triple_metre.cpp)          |
| `abc230c` | X drawing                            | 行列・数学             |     UP     |  566   |                [リンク](./renshu/abc230c_x_drawing.cpp)                 |
| `abc232a` | QQ solver                            | 実装                   |     AC     |   9    |           [リンク](./adt/adt_all_20261006_2/a_qq_solver.cpp)            |
| `abc225a` | Distinct Strings                     | 全探索                 |     AC     |   12   |        [リンク](./adt/adt_all_20261112_1/b_distinct_strings.cpp)        |
| `abc232c` | Graph Isomorphism                    | 全探索                 |     AC     |  685   |            [リンク](./renshu/abc232c_graph_isomorphism.cpp)             |
| `abc234e` | Arithmetic Number                    | 二分探索               |     UP     |  899   |            [リンク](./renshu/abc234e_arithmetic_number.cpp)             |
| `abc235c` | The Kth Time Query                   | 連想配列               |     AC     |  249   |       [リンク](./adt/adt_all_20261001_2/e_the_kth_time_query.py)        |
| `abc236b` | Who is missing?                      | 文字列・実装           |     AC     |   29   |         [リンク](./adt/adt_all_20261008_2/d_who_is_missing.cpp)         |
| `abc237b` | Matrix Transposition                 | 行列                   |     UP     |   48   |      [リンク](./adt/adt_all_20261020_1/d_matrix_transposition.cpp)      |
| `abc237d` | LR Insertion                         | 連結リスト             |     AC     |  544   |          [リンク](./adt/adt_all_20261027_1/g_lr_insertion.cpp)          |
| `abc238b` | Pizza                                | 実装                   |     UP     |  183   |             [リンク](./adt/adt_all_20261019_1/c_pizza.cpp)              |
| `abc239b` | Integer Division                     | 実装                   |     AC     |   57   |        [リンク](./adt/adt_all_20261008_1/d_integer_division.cpp)        |
| `abc239c` | Knight Fork                          | 全探索・数学           |     AC     |  198   |          [リンク](./adt/adt_all_20261104_1/e_knight_fork.cpp)           |
| `abc240d` | Strange Balls                        | 実装                   |     UP     |  570   |              [リンク](./renshu/abc240d_strange_balls.cpp)               |
| `abc241b` | Pasta                                | 連想配列               |     AC     |   42   |             [リンク](./adt/adt_all_20261027_1/d_pasta.cpp)              |
| `abc241d` | Sequence Query                       | 二分探索               |     AC     |  1177  |         [リンク](./adt/adt_all_20261030_1/g_sequence_query.cpp)         |
| `abc243d` | Moves on Binary Tree                 | データ構造             |     AC     |  758   |      [リンク](./adt/adt_all_20261109_1/g_moves_on_binary_tree.cpp)      |
| `abc244b` | Go Straight and Turn Right           | 実装                   |     AC     |   30   |   [リンク](./adt/adt_all_20261022_1/c_go_straight_and_turn_right.cpp)   |
| `abc244c` | Yamanote Line Game                   | 実装                   |     AC     |  165   |       [リンク](./adt/adt_all_20261102_1/f_yamanote_line_game.cpp)       |
| `abc248b` | Slimes                               | 実装                   |     AC     |   41   |                  [リンク](./renshu/abc248b_slimes.cpp)                  |
| `abc249b` | Perfect String                       | 連想配列               |     AC     |   47   |         [リンク](./adt/adt_all_20261009_1/c_perfect_string.cpp)         |
| `abc249c` | Just K                               | ビット全探索           |     UP     |  528   |             [リンク](./adt/adt_all_20261005_2/f_just_k.cpp)             |
| `abc249d` | Index Trio                           | 組み合わせ・数学       |     UP     |  983   |           [リンク](./adt/adt_all_20261022_1/g_index_trio.cpp)           |
| `abc250c` | Adjacent Swaps                       | 実装・連想配列         |     AC     |  517   |         [リンク](./adt/adt_all_20261021_2/f_adjacent_swaps.cpp)         |
| `abc251a` | Six Character                        | 実装                   |     AC     |   9    |         [リンク](./adt/adt_all_20261027_1/a_six_characters.cpp)         |
| `abc252c` | Slot Strategy                        | 考察                   |     AC     |  441   |         [リンク](./adt/adt_all_20261104_1/f_slot_strategy.cpp)          |
| `abc252e` | Road Reduction                       |                        |            |  1294  |         [リンク](./adt/adt_all_20261102_1/h_road_reduction.cpp)         |
| `abc253a` | Median?                              | 実装                   |     AC     |   17   |             [リンク](./adt/adt_all_20261022_1/b_median.cpp)             |
| `abc254a` | Last Two Digits                      | 実装                   |     AC     |   7    |        [リンク](./adt/adt_all_20261012_1/a_last_two_digits.cpp)         |
| `abc255c` | ±1 operation 1                       | 二分探索・数学         |     UP     |  574   |         [リンク](./adt/adt_all_20260928_1/f_1_operation_1.cpp)          |
| `abc255d` | ±1 operation 2                       | 二分探索・数学         |     AC     |  788   |         [リンク](./adt/adt_all_20261105_1/g_1_operation_2.cpp)          |
| `abc256a` | 2^N                                  | 実装                   |     AC     |   7    |               [リンク](./adt/adt_all_20261001_2/b_2^n.py)               |
| `abc257b` | 1D Pawn                              | 連想配列               |     AC     |   91   |            [リンク](./adt/adt_all_20260928_1/c_1d_pawn.cpp)             |
| `abc260a` | A Unique Letter                      | 実装                   |     AC     |   12   |        [リンク](./adt/adt_all_20261021_2/b_a_unique_letter.cpp)         |
| `abc260c` | Changing Jewels                      | DP                     |     AC     |  413   |        [リンク](./adt/adt_all_20261022_1/e_changing_jewels.cpp)         |
| `abc260d` | Draw Your Cards                      | 二分探索・連想配列     |     UP     |  1074  |        [リンク](./adt/adt_all_20260928_1/g_draw_your_cards.cpp)         |
| `abc261a` | Intersection                         | 実装                   |     AC     |   51   |          [リンク](./adt/adt_all_20261006_1/a_intersection.cpp)          |
| `abc262b` | Triangle (Easier)                    | グラフ                 |     AC     |  220   |        [リンク](./adt/adt_all_20261007_2/c_triangle_easier.cpp)         |
| `abc264b` | Nice Grid                            | 実装・数学             |     AC     |   55   |           [リンク](./adt/adt_all_20261105_1/c_nice_grid.cpp)            |
| `abc265b` | Explore                              | 配列                   |     AC     |  152   |             [リンク](./adt/adt_all_20261001_1/c_explore.py)             |
| `abc267a` | Saturday                             | 実装                   |     AC     |   13   |            [リンク](./adt/adt_all_20261102_1/b_saturday.cpp)            |
| `abc267d` | Index x A(Not continuous ver.)       | 2DDP                   |     UP     |  864   |     [リンク](./adt/adt_all_20261008_2/g_index_a_not_continuous.cpp)     |
| `abc268b` | Prefix?                              | 文字列                 |     AC     |   26   |             [リンク](./adt/adt_all_20261029_1/c_prefix.cpp)             |
| `abc269c` | Submask                              | ビット全探索           |     AC     |  384   |                 [リンク](./renshu/abc269c_submask.cpp)                  |
| `abc270c` | Simple path                          | グラフ・木構造         |     AC     |  625   |          [リンク](./adt/adt_all_20261019_1/e_simple_path.cpp)           |
| `abc271a` | 484588                               | 実装                   |     AC     |   28   |             [リンク](./adt/adt_all_20261105_1/a_484588.cpp)             |
| `abc271b` | Maintain Multiple Sequences          | 配列                   |     AC     |   97   |  [リンク](./adt/adt_all_20261013_2/d_maintain_multiple_sequences.cpp)   |
| `abc272d` | Root M Leaper                        | 行列・幅優先探索       |     UP     |  804   |         [リンク](./adt/adt_all_20261001_1/g_root_m_leaper.cpp)          |
| `abc274b` | Line Sensor                          | 行列                   |     AC     |   48   |          [リンク](./adt/adt_all_20261005_2/d_line_sensor.cpp)           |
| `abc275d` | Yet Another Recursive Function       | 再帰                   |     AC     |  606   | [リンク](./adt/adt_all_20261029_1/g_yet_another_recursive_function.cpp) |
| `abc277a` | ^{-1}                                | 実装                   |     AC     |   11   |                    [リンク](./renshu/abc277a_-1.cpp)                    |
| `abc277b` | Playing Cards Validation             | 実装                   |     AC     |   60   |    [リンク](./adt/adt_all_20261012_1/d_playing_cards_validation.cpp)    |
| `abc278b` | Misjudge the Time                    | 実装                   |     AC     |  123   |       [リンク](./adt/adt_all_20261012_1/c_misjudge_the_time.cpp)        |
| `abc279a` | wwwvvvvvv                            | 実装                   |     AC     |   7    |           [リンク](./adt/adt_all_20261016_1/a_wwwvvvvvv.cpp)            |
| `abc280b` | Inverse Prefix Sum                   | 累積和                 |     AC     |   22   |       [リンク](./adt/adt_all_20261014_2/d_inverse_prefix_sum.cpp)       |
| `abc280d` | Factorial and Multiple               | 数学                   |            |  880   |          [リンク](./renshu/abc280d_factorial_and_multiple.cpp)          |
| `abc282a` | Generalized ABC                      | 実装                   |     AC     |   7    |        [リンク](./adt/adt_all_20261001_1/b_generalized_abc.cpp)         |
| `abc282c` | String Delimiter                     | 文字列                 |     AC     |  104   |        [リンク](./adt/adt_all_20261016_1/f_string_delimiter.cpp)        |
| `abc283c` | Cash Register                        | 貪欲法                 |     AC     |   88   |         [リンク](./adt/adt_all_20261111_2/f_cash_register.cpp)          |
| `abc284b` | Multi Test Cases                     | 実装                   |     AC     |   14   |        [リンク](./adt/adt_all_20261005_2/c_multi_test_cases.cpp)        |
| `abc285a` | Edge Checker 2                       | 考察                   |     AC     |   11   |         [リンク](./adt/adt_all_20261021_2/a_edge_checker_2.cpp)         |
| `abc286b` | Cat                                  | 実装・文字列           |     AC     |   32   |              [リンク](./adt/adt_all_20261103_1/c_cat.cpp)               |
| `abc286c` | Rotate and Palindrome                | 文字列                 |     UP     |  565   |          [リンク](./renshu/abc286c_rotate_and_palindrome.cpp)           |
| `abc288a` | Many A+B Problems                    | 実装                   |     AC     |   6    |       [リンク](./adt/adt_all_20261005_2/b_many_a_b_problems.cpp)        |
| `abc289b` | レ                                   | 配列                   |     AC     |  225   |               [リンク](./adt/adt_all_20261001_2/d_レ.py)                |
| `abc289d` | Step Up Robot                        | 1DDP                   |     AC     |  551   |         [リンク](./adt/adt_all_20261104_1/g_step_up_robot.cpp)          |
| `abc291a` | camel Case                           | 実装・文字列           |     AC     |   8    |           [リンク](./adt/adt_all_20261007_2/a_camel_case.cpp)           |
| `abc292a` | CAPS LOCK                            | 実装                   |     AC     |   7    |           [リンク](./adt/adt_all_20261105_1/b_caps_lock.cpp)            |
| `abc294b` | ASCII Art                            | 行列                   |     AC     |   25   |           [リンク](./adt/adt_all_20261029_1/d_ascii_art.cpp)            |
| `abc294e` | 2xN Grid                             | データ構造             |     AC     |  758   |            [リンク](./adt/adt_all_20261109_1/h_2n_grid.cpp)             |
| `abc296c` | Gap Existence                        | 実装                   |     AC     |  162   |         [リンク](./adt/adt_all_20261112_1/e_gap_existence.cpp)          |
| `abc297a` | Double Click                         | 実装                   |     AC     |   16   |          [リンク](./adt/adt_all_20261002_2/b_double_click.cpp)          |
| `abc297b` | chess 960                            | 文字列・実装           |     AC     |   47   |           [リンク](./adt/adt_all_20261007_2/d_chess_960.cpp)            |
| `abc297c` | PC on the Table                      | 行列・実装             |     AC     |   96   |        [リンク](./adt/adt_all_20261006_2/e_pc_on_the_table.cpp)         |
| `abc298c` | Cards Query Problem                  | 連想配列               |     AC     |  448   |      [リンク](./adt/adt_all_20261002_2/f_cards_query_problem.cpp)       |
| `abc299c` | Dango                                | 文字列                 |     AC     |  191   |             [リンク](./adt/adt_all_20261023_1/e_dango.cpp)              |
| `abc302a` | Attack                               | 実装                   |     AC     |   24   |             [リンク](./adt/adt_all_20261110_1/a_attack.cpp)             |
| `abc303a` | Similar String                       | 実装                   |     AC     |   22   |         [リンク](./adt/adt_all_20261103_1/a_similar_string.cpp)         |
| `abc304a` | First Player                         | 配列                   |     AC     |   -    |          [リンク](./adt/adt_all_20261008_2/b_first_player.cpp)          |
| `abc306a` | Echo                                 | 実装                   |     AC     |   0    |              [リンク](./adt/adt_all_20261102_1/a_echo.cpp)              |
| `abc306c` | Centers                              | 実装・配列             |     AC     |  159   |            [リンク](./adt/adt_all_20261001_1/f_centers.cpp)             |
| `abc307b` | racecar                              | 全探索・文字列         |     AC     |   70   |            [リンク](./adt/adt_all_20261002_2/d_racecar.cpp)             |
| `abc309a` | Nine                                 | 実装                   |     AC     |   22   |              [リンク](./adt/adt_all_20261013_1/a_nine.cpp)              |
| `abc309c` | Medicine                             | 連想配列               |     AC     |  348   |            [リンク](./adt/adt_all_20261008_1/f_medicine.cpp)            |
| `abc309d` | Add One Edge                         | グラフ・最短経路       |     UP     |  621   |          [リンク](./adt/adt_all_20261007_2/g_add_one_edge.cpp)          |
| `abc310c` | Reversible                           | 実装・連想配列         |     AC     |  272   |           [リンク](./adt/adt_all_20261109_1/e_reversible.cpp)           |
| `abc311b` | Vacation Together                    | 配列                   |     AC     |   67   |       [リンク](./adt/adt_all_20261027_1/c_vacation_together.cpp)        |
| `abc312a` | Chord                                | 実装                   |     AC     |   12   |             [リンク](./adt/adt_all_20261012_2/b_chord.cpp)              |
| `abc314d` | LOWER                                | オフライン処理         |     UP     |  585   |                  [リンク](./renshu/abc314d_lower.cpp)                   |
| `abc315a` | tcdr                                 | 実装・文字列           |     AC     |   12   |              [リンク](./adt/adt_all_20261019_1/b_tcdr.cpp)              |
| `abc317c` | Remembering the Days                 | 深さ優先探索・全探索   |     UP     |  604   |      [リンク](./adt/adt_all_20261023_1/f_remembering_the_days.cpp)      |
| `abc318e` | Sandwiches                           |                        |            |  1004  |           [リンク](./adt/adt_all_20261002_2/h_sandwiches.cpp)           |
| `abc319c` | False Hope                           | 全探索                 |     UP     |  1111  |           [リンク](./adt/adt_all_20261006_1/f_false_hope.cpp)           |
| `abc321b` | Cutoff                               | 配列                   |     AC     |  220   |             [リンク](./adt/adt_all_20261013_1/c_cutoff.cpp)             |
| `abc322a` | First ABC 2                          | 実装                   |     AC     |   12   |          [リンク](./adt/adt_all_20261104_1/b_first_abc_2.cpp)           |
| `abc322c` | Festival                             | 実装・配列             |     AC     |   57   |            [リンク](./adt/adt_all_20261008_1/e_festival.cpp)            |
| `abc323a` | Weak Beats                           | 実装                   |     AC     |   15   |           [リンク](./adt/adt_all_20260928_1/a_weak_beats.cpp)           |
| `abc323b` | Round-Robin Tournament               | 実装                   |     AC     |   75   |     [リンク](./adt/adt_all_20261110_1/c_round_robin_tournament.cpp)     |
| `abc324d` | Square Permutation                   | 全探索                 |     UP     |  895   |            [リンク](./renshu/abc324d_square_permutation.cpp)            |
| `abc325a` | Takahashi san                        | 実装                   |     AC     |   8    |         [リンク](./adt/adt_all_20261111_2/a_takahashi_san.cpp)          |
| `abc325c` | Sensors                              | 深さ優先探索           |     AC     |  400   |            [リンク](./adt/adt_all_20261110_1/e_sensors.cpp)             |
| `abc326b` | 326-like Numbers                     | 全探索                 |     AC     |   42   |        [リンク](./adt/adt_all_20261006_1/c_326_like_numbers.cpp)        |
| `abc327c` | Number Place                         | 実装                   |     AC     |  169   |          [リンク](./adt/adt_all_20261008_2/e_number_place.cpp)          |
| `abc329a` | Spread                               | 実装                   |     AC     |   9    |             [リンク](./adt/adt_all_20260928_1/b_spread.cpp)             |
| `abc329c` | Count xxx                            | 文字列・尺取り法       |     AC     |  205   |           [リンク](./adt/adt_all_20261029_1/e_count_xxx.cpp)            |
| `abc329d` | Election Quick Report                | 連想配列               |     AC     |  263   |     [リンク](./adt/adt_all_20261005_2/g_election_quick_report.cpp)      |
| `abc330c` | Minimize Abs 2                       | 数学                   |     UP     |  519   |         [リンク](./adt/adt_all_20261013_1/e_minimize_abs_2.cpp)         |
| `abc331a` | Tomorrow                             | 実装                   |     AC     |   25   |            [リンク](./adt/adt_all_20261014_2/a_tomorrow.cpp)            |
| `abc331f` | Palindrome Query                     | セグメント木           |            |  1666  |        [リンク](./adt/adt_all_20261016_1/i_palindrome_query.cpp)        |
| `abc332b` | Glass and Mug                        | 実装                   |     AC     |   76   |         [リンク](./adt/adt_all_20261009_1/d_glass_and_mug.cpp)          |
| `abc334a` | Christmas Present                    | 実装                   |     AC     |   10   |       [リンク](./adt/adt_all_20261028_2/b_christmas_present.cpp)        |
| `abc334b` | Christmas Trees                      | 数学                   |     UP     |  479   |        [リンク](./adt/adt_all_20261006_2/c_christmas_trees.cpp)         |
| `abc336a` | Long Loong                           | 実装                   |     AC     |   6    |           [リンク](./adt/adt_all_20261012_1/b_long_loong.cpp)           |
| `abc336c` | Even Digits                          | 数学                   |     AC     |  343   |          [リンク](./adt/adt_all_20261001_1/e_even_digits.cpp)           |
| `abc340c` | Divide and Divide                    | 1DDP                   |     AC     |  528   |       [リンク](./adt/adt_all_20261006_1/e_divide_and_divide.cpp)        |
| `abc341b` | Foreign Exchange                     | 考察                   |     AC     |  163   |        [リンク](./adt/adt_all_20261023_1/c_foreign_exchange.cpp)        |
| `abc342a` | Yay!                                 | 実装                   |     AC     |   31   |              [リンク](./adt/adt_all_20261104_1/a_yay.cpp)               |
| `abc344b` | Delimiter                            | 実装                   |     AC     |   47   |           [リンク](./adt/adt_all_20261012_2/c_delimiter.cpp)            |
| `abc344d` | String Bags                          | 2DDP                   |     AC     |  854   |          [リンク](./adt/adt_all_20261111_2/g_string_bags.cpp)           |
| `abc345c` | One Time Swap                        | 組み合わせ             |     AC     |  469   |         [リンク](./adt/adt_all_20261016_1/e_one_time_swap.cpp)          |
| `abc346c` | Σ                                    | 連想配列               |     AC     |  179   |               [リンク](./adt/adt_all_20261009_1/e_Σ.cpp)                |
| `abc347c` | Ideal Holidays                       |                        |            |  926   |         [リンク](./adt/adt_all_20261112_1/f_ideal_holidays.cpp)         |
| `abc347e` | Set Add Query                        | 累積和                 |     UP     |  1166  |         [リンク](./adt/adt_all_20261006_2/h_set_add_query.cpp)          |
| `abc348c` | Colorful Beans                       | 連想配列               |     AC     |  156   |         [リンク](./adt/adt_all_20261105_1/e_colorful_beans.cpp)         |
| `abc349d` | Divide Interval                      | 貪欲法                 |     AC     |  832   |        [リンク](./adt/adt_all_20261112_1/g_divide_interval.cpp)         |
| `abc356c` | Keys                                 | ビット全探索           |     UP     |  568   |                   [リンク](./renshu/abc356c_keys.cpp)                   |
| `abc358c` | Popcorn                              | 全探索                 |     AC     |  273   |             [リンク](./adt/adt_all_20261001_2/f_popcorn.py)             |
| `abc359a` | Count Takahashi                      | 実装                   |     AC     |   10   |        [リンク](./adt/adt_all_20261022_1/a_count_takahashi.cpp)         |
| `abc359b` | Couples                              | 連想配列               |     AC     |   27   |            [リンク](./adt/adt_all_20261111_2/c_couples.cpp)             |
| `abc360a` | A Healthy Breakfast                  | 実装                   |     UP     |   19   |      [リンク](./adt/adt_all_20261026_1/b_a_healthy_breakfast.cpp)       |
| `abc360b` | Vertical Reading                     | 実装・文字列           |     AC     |   78   |        [リンク](./adt/adt_all_20261019_1/d_vertical_reading.cpp)        |
| `abc361b` | Intersection of Cuboids              | 幾何学                 |     AC     |  299   |         [リンク](./adt/adt_easy_20260925_1/c_intersection.cpp)          |
| `abc361c` | Make Them Narrow                     | 全探索                 |     UP     |  342   |        [リンク](./adt/adt_all_20261109_1/f_make_them_narrow.cpp)        |
| `abc365c` | Transportation Expenses              | 二分探索               |     UP     |  269   |         [リンク](./adt/adt_all_20261007_2/e_transportation.cpp)         |
| `abc366c` | Balls and Bag Query                  | 連想配列               |     UP     |  180   |      [リンク](./adt/adt_all_20261026_1/f_balls_and_bag_query.cpp)       |
| `abc366d` | Cuboid Sum Query                     | 累積和                 |     UP     |  586   |             [リンク](./renshu/abc366d_cuboid_sum_query.cpp)             |
| `abc367a` | Shout Everyday                       | 全探索                 |     AC     |   43   |         [リンク](./adt/adt_all_20261014_2/b_shout_everyday.cpp)         |
| `abc368a` | Cut                                  | 配列                   |     AC     |   20   |              [リンク](./adt/adt_all_20261007_2/b_cut.cpp)               |
| `abc369b` | Piano 3                              | 実装                   |     AC     |   62   |            [リンク](./adt/adt_all_20261112_1/d_piano_3.cpp)             |
| `abc369d` | Bonus EXP                            | 2DDP                   |            |  621   |                                                                         |
| `abc359b` | Couples                              | 連想配列               |     AC     |   27   |            [リンク](./adt/adt_all_20261111_2/c_couples.cpp)             |
| `abc370c` | Word Ladder                          | 最短経路・文字列       |     AC     |  228   |          [リンク](./adt/adt_all_20261027_1/f_word_ladder.cpp)           |
| `abc372a` | delete .                             | 実装                   |     AC     |   12   |             [リンク](./adt/adt_all_20261006_2/b_delete.cpp)             |
| `abc372c` | Count ABC Again                      | 考察                   |     UP     |  341   |        [リンク](./adt/adt_all_20261020_1/e_count_abc_again.cpp)         |
| `abc373b` | 1D Keyboard                          | 実装                   |     AC     |   54   |          [リンク](./adt/adt_all_20261109_1/c_1d_keyboard.cpp)           |
| `abc373c` | Max Ai+Bj                            | 実装                   |     AC     |   75   |           [リンク](./adt/adt_all_20261012_1/f_max_ai_bj.cpp)            |
| `abc375a` | Seats                                | 実装                   |     AC     |   20   |             [リンク](./adt/adt_all_20261006_1/b_seats.cpp)              |
| `abc376c` | Prepare Another Box                  | 二分探索               |     UP     |  366   |      [リンク](./adt/adt_all_20261026_1/e_prepare_another_box.cpp)       |
| `abc378d` | Count Simple Paths                   | 深さ優先探索・全探索   |     UP     |  587   |            [リンク](./renshu/abc378d_count_simple_paths.cpp)            |
| `abc380a` | 123233                               | 実装                   |     AC     |   16   |             [リンク](./adt/adt_all_20261023_1/a_123233.cpp)             |
| `abc380b` | Hurdle Parsing                       | 文字列                 |     AC     |   27   |         [リンク](./adt/adt_all_20261001_1/d_hurdle_parsing.cpp)         |
| `abc380c` | Move Segment                         | 実装                   |     AC     |  223   |          [リンク](./adt/adt_all_20261105_1/f_move_segment.cpp)          |
| `abc381b` | 1122 String                          | 文字列・実装           |     UP     |   52   |          [リンク](./adt/adt_all_20261026_1/c_1122_string.cpp)           |
| `abc382c` | Kaiten Sushi                         | 二分探索               |     UP     |  476   |          [リンク](./adt/adt_all_20261014_2/e_kaiten_sushi.cpp)          |
| `abc384c` | Perfect Standings                    | 実装                   |     AC     |  187   |       [リンク](./adt/adt_all_20261007_2/f_perfect_standings.cpp)        |
| `abc385a` | Equally                              | 実装                   |     AC     |   14   |            [リンク](./adt/adt_all_20261030_1/a_equally.cpp)             |
| `abc386a` | Full House 2                         | 実装・連想配列         |     AC     |   25   |          [リンク](./adt/adt_all_20261001_1/a_full_house_2.cpp)          |
| `abc387a` | Happy New Year 2025                  | 実装                   |     AC     |   6    |      [リンク](./adt/adt_all_20261002_2/a_happy_new_year_2025.cpp)       |
| `abc387b` | 9x9 Sum                              | 考察                   |     UP     |   21   |            [リンク](./adt/adt_all_20261020_1/c_9x9_sum.cpp)             |
| `abc388a` | ?UPC                                 | 実装                   |     AC     |   8    |              [リンク](./adt/adt_easy_20260925_1/b_upc.cpp)              |
| `abc388c` | Various Kagamimochi                  | 尺取り法・二分探索     |     AC     |  211   |      [リンク](./adt/adt_all_20261009_1/f_various_kagamimochi.cpp)       |
| `abc388e` | Simultaneous Kagamimochi             | 考察                   |     UP     |  1068  |    [リンク](./adt/adt_all_20261019_1/h_simultaneous_kagamimochi.cpp)    |
| `abc392a` | Shuffled Equation                    | 実装                   |     AC     |   11   |       [リンク](./adt/adt_all_20261103_1/b_shuffled_equation.cpp)        |
| `abc392d` | Doubles                              | 全探索                 |     UP     |  579   |            [リンク](./adt/adt_all_20261020_1/g_doubles.cpp)             |
| `abc393c` | Make it Simple                       | グラフ                 |     AC     |  188   |         [リンク](./adt/adt_all_20261014_2/f_make_it_simple.cpp)         |
| `abc394b` | cat                                  | 実装                   |     AC     |   30   |              [リンク](./adt/adt_all_20261110_1/d_cat.cpp)               |
| `abc394d` | Colorful Bracket Sequence            | 連想配列               |     UP     |  253   |   [リンク](./adt/adt_all_20261008_1/g_colorful_bracket_sequence.cpp)    |
| `abc398a` | Doors in the Center                  | 実装                   |     AC     |   10   |      [リンク](./adt/adt_all_20261112_1/a_doors_in_the_center.cpp)       |
| `abc398c` | Uniqueness                           | 連想配列               |     AC     |  124   |           [リンク](./adt/adt_all_20261022_1/f_uniqueness.cpp)           |
| `abc399a` | Hamming Distance                     | 文字列                 |     AC     |   9    |        [リンク](./adt/adt_all_20261005_2/a_hamming_distance.cpp)        |
| `abc401b` | Unauthorized                         | 実装                   |     AC     |   20   |          [リンク](./adt/adt_all_20261016_1/d_unauthorized.cpp)          |
| `abc401c` | K-bonacci                            | 1DDP・累積和           |     UP     |  248   |           [リンク](./adt/adt_all_20261012_2/f_k_bonacci.cpp)            |
| `abc402c` | Dislike Foods                        | 連想配列               |     AC     |  337   |         [リンク](./adt/adt_all_20261029_1/f_dislike_foods.cpp)          |
| `abc403b` | Four Hidden                          | 全探索                 |     AC     |   74   |          [リンク](./adt/adt_all_20261104_1/c_four_hidden.cpp)           |
| `abc404b` | Grid Rotation                        | 行列・考察             |     AC     |  181   |         [リンク](./adt/adt_all_20261030_1/d_grid_rotation.cpp)          |
| `abc405b` | Not All                              | 実装                   |     AC     |   50   |                 [リンク](./renshu/abc405b_not_all.cpp)                  |
| `abc405c` | Sum of Product                       | 累積和                 |     AC     |  102   |         [リンク](./adt/adt_all_20261005_2/e_sum_of_product.cpp)         |
| `abc406b` | Product Calculator                   | 数学                   |     UP     |  177   |       [リンク](./adt/adt_all_20261021_2/d_product_calculator.cpp)       |
| `abc407a` | Approximation                        | 実装                   |     UP     |  587   |         [リンク](./adt/adt_all_20261026_1/a_approximation.cpp)          |
| `abc409b` | Citation                             | 二分探索               |     AC     |  126   |            [リンク](./adt/adt_all_20261030_1/c_citation.cpp)            |
| `abc410c` | Rotatable Array                      | 実装・配列             |     AC     |  230   |        [リンク](./adt/adt_easy_20260925_1/e_rotatable_array.cpp)        |
| `abc411a` | Required Length                      | 実装                   |     AC     |   11   |         [リンク](./adt/adt_all_20261001_2/a_required_length.py)         |
| `abc411b` | Distance Table                       | 累積和                 |     AC     |   32   |         [リンク](./adt/adt_all_20261021_2/c_distance_table.cpp)         |
| `abc412b` | Precondition                         | 文字列・実装           |     AC     |   41   |          [リンク](./adt/adt_all_20261008_2/c_precondition.cpp)          |
| `abc413c` | Large Queue                          | データ構造             |     AC     |  229   |          [リンク](./adt/adt_all_20261103_1/f_large_queue.cpp)           |
| `abc414c` | Palindromic in Both Bases            | 全探索                 |            |  709   |   [リンク](./adt/adt_all_20261008_2/f_palindromic_in_both_bases.cpp)    |
| `abc416b` | 1D Akari                             | 考察                   |     AC     |   56   |            [リンク](./adt/adt_all_20261016_1/c_1d_akari.cpp)            |
| `abc416c` | Concat (X-th)                        | 全探索                 |     AC     |  298   |           [リンク](./adt/adt_all_20261019_1/f_concat_xth.cpp)           |
| `abc417a` | A Substring                          | 実装                   |     AC     |   15   |          [リンク](./adt/adt_all_20261027_1/b_a_substring.cpp)           |
| `abc419a` | AtCoder Language                     | 実装                   |     AC     |   16   |        [リンク](./adt/adt_all_20261109_1/a_atcoder_language.cpp)        |
| `abc421a` | Misdelivery                          | 連想配列               |     AC     |   14   |          [リンク](./adt/adt_easy_20260925_1/a_misdelivery.cpp)          |
| `abc423c` | Lock All Doors                       | 考察                   |     UP     |  377   |         [リンク](./adt/adt_all_20261028_2/f_lock_all_doors.cpp)         |
| `abc424a` | Isosceles                            | 実装                   |     AC     |   4    |           [リンク](./adt/adt_all_20261030_1/b_isosceles.cpp)            |
| `abc425b` | Find Permutation 2                   | 考察                   |     AC     |   82   |       [リンク](./adt/adt_all_20261104_1/d_find_permutation_2.cpp)       |
| `abc425d` | Ulam-Warburton Automation            | 実装                   |     UP     |  882   |    [リンク](./adt/adt_all_20261019_1/g_ulam_warburton_automaton.cpp)    |
| `abc426a` | OS Versions                          | 実装                   |     AC     |   18   |          [リンク](./adt/adt_all_20261008_1/b_os_versions.cpp)           |
| `abc426b` | The Odd One Out                      | 実装                   |     AC     |   25   |        [リンク](./adt/adt_all_20261013_2/c_the_odd_one_out.cpp)         |
| `abc426f` | Clearance                            | セグメント木           |            |  1776  |           [リンク](./adt/adt_all_20261027_1/i_clearance.cpp)            |
| `abc431a` | Robot Balance                        | 実装                   |     AC     |   10   |         [リンク](./adt/adt_all_20261019_1/a_robot_balance.cpp)          |
| `abc433a` | Happy Birthday! 4                    | 実装                   |     UP     |   43   |        [リンク](./adt/adt_all_20261020_1/a_happy_birthday_4.cpp)        |
| `abc434c` | Flapping Takahashi                   | 考察                   |     AC     |  374   |       [リンク](./adt/adt_all_20261013_2/f_flapping_takahashi.cpp)       |
| `abc435a` | Triangular Number                    | 数学                   |     AC     |   6    |       [リンク](./adt/adt_all_20261009_1/b_triangular_number.cpp)        |
| `abc435d` | Reachability Query 2                 | 深さ優先探索           |     UP     |  568   |           [リンク](./renshu/abc435d_reachability_query_2.cpp)           |
| `abc435e` | Cover query                          | 考察                   |            |  982   |          [リンク](./adt/adt_all_20261016_1/h_cover_query.cpp)           |
| `abc438c` | 1D puyopuyo                          | 配列                   |     AC     |  368   |          [リンク](./adt/adt_all_20261013_1/f_1d_puyopuyo.cpp)           |
| `abc438d` | Tail of Snake                        |                        |            |  652   |         [リンク](./adt/adt_all_20261002_2/g_tail_of_snake.cpp)          |
| `abc440b` | Trifecta                             | 配列                   |     AC     |   27   |           [リンク](./adt/adt_easy_20260925_1/d_trifecta.cpp)            |
| `abc440c` | Striped Horse                        | 考察                   |     UP     |  631   |         [リンク](./adt/adt_all_20261030_1/e_striped_horse.cpp)          |
| `abc440d` | Forbidden List 2                     |                        |            |  863   |        [リンク](./adt/adt_all_20261016_1/g_forbidden_list_2.cpp)        |
| `abc441c` | Sake or Water                        | 貪欲法                 |     UP     |  406   |         [リンク](./adt/adt_all_20261012_2/e_sake_or_water.cpp)          |
| `abc444c` | AtCoder Riko                         | 考察                   |     UP     |  582   |          [リンク](./adt/adt_all_20261028_2/e_atcoder_riko.cpp)          |
| `abc444d` | Many Repunit Sum                     | 配列・考察             |     AC     |  574   |        [リンク](./adt/adt_all_20261012_1/g_many_repunit_sum.cpp)        |
| `abc445c` | Sugoroku Destination                 | 1DDP                   |     AC     |  404   |      [リンク](./adt/adt_all_20261103_1/e_sugoroku_destination.cpp)      |
| `abc447e` | Divide Graph                         |                        |            |  955   |          [リンク](./adt/adt_all_20261103_1/h_divide_graph.cpp)          |
| `abc448a` | chmin                                | 実装                   |     AC     |   13   |             [リンク](./adt/adt_all_20261016_1/b_chmin.cpp)              |
| `abc448d` | Integer-duplicated Path              | 深さ優先探索           |     UP     |  638   |    [リンク](./adt/adt_all_20261009_1/g_integer_duplicated_path.cpp)     |
| `abc449a` | π                                    | 実装                   |     AC     |   30   |               [リンク](./adt/adt_all_20261023_1/b_π.cpp)                |
| `abc449d` | Make Target 2                        |                        |            |  927   |         [リンク](./adt/adt_all_20261102_1/g_make_target_2.cpp)          |
| `abc450b` | Split Ticketing                      | 考察                   |     AC     |  114   |        [リンク](./adt/adt_all_20261022_1/d_split_ticketing.cpp)         |
| `abc451b` | Personnel Change                     | 実装                   |     AC     |   36   |        [リンク](./adt/adt_all_20261008_1/c_personnel_change.cpp)        |
| `abc452b` | Draw Frame                           | 実装                   |     UP     |   25   |           [リンク](./adt/adt_all_20261026_1/d_draw_frame.cpp)           |
| `abc452c` | Fishbones                            | 連想配列               |     UP     |  435   |           [リンク](./adt/adt_all_20261012_1/e_fishbones.cpp)            |
| `abc453d` | Go Straight                          | 最短経路               |     AC     |  1011  |          [リンク](./adt/adt_all_20261110_1/g_go_straight.cpp)           |
| `abc456b` | 456                                  | 全探索                 |     AC     |   96   |              [リンク](./adt/adt_all_20261103_1/d_456.cpp)               |
| `abc459a` | Hell, World!                         | 文字列                 |     AC     |   15   |           [リンク](./adt/adt_all_20261029_1/b_hell_world.cpp)           |
| `abc459b` | 459                                  | 実装                   |     AC     |   32   |              [リンク](./adt/adt_all_20261014_2/c_459.cpp)               |
| `abc463c` | Tallest at the Moment                | 二分探索               |     UP     |  274   |     [リンク](./adt/adt_all_20261013_2/e_tallest_at_the_moment.cpp)      |
| `abc463e` | Roads and Gates                      | 最短経路               |     UP     |  1055  |        [リンク](./adt/adt_all_20261029_1/h_roads_and_gates.cpp)         |
| `abc464a` | Decisive Battle                      | 実装                   |     AC     |   13   |        [リンク](./adt/adt_all_20261012_2/a_decisive_battle.cpp)         |
| `abc465b` | Parking 2                            | 実装                   |     AC     |   56   |           [リンク](./adt/adt_all_20261028_2/d_parking_2.cpp)            |
| `abc467a` | Obesity                              | 実装                   |     AC     |   76   |            [リンク](./adt/adt_all_20261109_1/b_obesity.cpp)             |
| `abc467b` | Keep the Change                      | 実装                   |     AC     |   39   |        [リンク](./adt/adt_all_20261023_1/d_keep_the_change.cpp)         |
| `abc467c` | Adjacent Sums (easy)                 | 考察                   |     UP     |  608   |       [リンク](./adt/adt_all_20261027_1/e_adjacent_sums_easy.cpp)       |
| `abc467d` | Concentric Circles                   | 数学                   |     UP     |  928   |       [リンク](./adt/adt_all_20261103_1/g_concentric_circles.cpp)       |
| `abc468a` | Maximal Value                        | 配列・実装             |     AC     |   17   |         [リンク](./adt/adt_all_20261013_2/b_maximal_value.cpp)          |
| `abc469a` | Train Car                            | 実装                   |     UP     |   11   |           [リンク](./adt/adt_all_20261020_1/b_train_car.cpp)            |
| `abc469b` | Isolated Seats                       | 実装                   |     AC     |   35   |         [リンク](./adt/adt_all_20260928_1/d_isolated_seats.cpp)         |
| `abc470a` | Fizz                                 | 実装                   |     AC     |   12   |              [リンク](./adt/adt_all_20261013_1/b_fizz.cpp)              |
| `abc470b` | Monocolor                            | 考察                   |     AC     |   29   |           [リンク](./adt/adt_all_20261102_1/c_monocolor.cpp)            |
| `abc471c` | Cookies and Greedy Takahashi         | 連結リスト             |     UP     |  301   |       [リンク](./adt/adt_all_20261006_2/f_cookies_and_greedy.cpp)       |
| `abc471d` | Chargers                             | 考察                   |     UP     |  570   |                 [リンク](./renshu/abc471d_chargers.cpp)                 |
| `abc473c` | Change Schools                       | 連想配列               |     AC     |  120   |         [リンク](./adt/adt_all_20261002_2/e_change_schools.cpp)         |
| `abc474c` | Remove and Append                    | オフライン処理         |     UP     |  243   |       [リンク](./adt/adt_all_20261020_1/f_remove_and_append.cpp)        |
| `abc475d` | Alphametic Prime                     | 考察                   |     UP     |  741   |             [リンク](./renshu/abc475d_alphametic_prime.cpp)             |
| `abc476a` | Appender                             | 実装                   |     AC     |   14   |            [リンク](./adt/adt_all_20261029_1/a_appender.cpp)            |
| `abc477a` | Traffic Light                        | 実装                   |     AC     |   17   |               [リンク](./abc/abc477/a_traffic_light.cpp)                |
| `abc477b` | Standing Outliers                    | 全探索・配列           |     AC     |   79   |             [リンク](./abc/abc477/b_standing_outliers.cpp)              |
| `abc477c` | Range Search Query                   | 文字列・累積和         |     UP     |  456   |             [リンク](./abc/abc477/c_range_search_query.cpp)             |
| `abc477d` | Masking Type                         | オフライン処理         |     UP     |  946   |                [リンク](./abc/abc477/d_masking_tape.cpp)                |
| `abc477e` | Wheel Distance                       | 最短経路               |     UP     |  1235  |               [リンク](./abc/abc477/e_wheel_distance.cpp)               |
| `abc478a` | Grapes                               | 実装                   |     AC     |   18   |                   [リンク](./abc/abc478/a_grapes.cpp)                   |
| `abc478b` | Topping                              | 全探索                 |     AC     |   90   |                  [リンク](./abc/abc478/b_topping.cpp)                   |
| `abc478c` | Sort Subarray                        | 配列・考察             |     UP     |  426   |               [リンク](./abc/abc478/c_sort_subarray.cpp)                |
| `abc478d` | Range Set Insertion Query            | 累積和・オフライン処理 |     UP     |  729   |         [リンク](./abc/abc478/d_range_set_insertion_query.cpp)          |
| `abc479a` | Odd Index Sum                        | 実装                   |     AC     |   12   |               [リンク](./abc/abc479/a_odd_index_sum.cpp)                |
| `abc479b` | Longest Rainy Streak                 | 実装                   |     AC     |   33   |            [リンク](./abc/abc479/b_longest_rainy_streak.cpp)            |
| `abc479c` | Bento Packing                        | ビット全探索           |     AC     |  276   |               [リンク](./abc/abc479/c_bento_packing.cpp)                |
| `abc479d` | Back and Forth Distance              | 連結リスト             |     AC     |  563   |          [リンク](./abc/abc479/d_back_and_forth_distance.cpp)           |
| `abc479e` | Cut and Add                          | 木構造                 |            |  1000  |                [リンク](./abc/abc479/e_cut_and_add.cpp)                 |
| `abc480a` | ADjacent                             | 実装                   |     AC     |   35   |                  [リンク](./abc/abc480/a_adjacent.cpp)                  |
| `abc480b` | Invalid Vote                         | 文字列                 |     AC     |  201   |                [リンク](./abc/abc480/b_invalid_vote.cpp)                |
| `abc480c` | Self-Stopping Shower                 | 数学                   |     UP     |  625   |            [リンク](./abc/abc480/c_self_stopping_shower.cpp)            |
| `abc480d` | Concatenation of Prefixes            | 累積和                 |     AC     |  864   |         [リンク](./abc/abc480/d_concatenation_of_prefixes.cpp)          |
| `abc480d` | Product-Bounded Arithmetic Sequences | 全探索・二分探索       |     UP     |  1355  |         [リンク](./abc/abc480/e_product_bounded_arithmetic.cpp)         |
| `abc481a` | Digits of A + B                      | 実装                   |     AC     |   17   |               [リンク](./abc/abc481/a_digits_of_a_b.cpp)                |
| `abc481b` | Polyline                             | 実装                   |     AC     |   78   |                  [リンク](./abc/abc481/b_polyline.cpp)                  |
| `abc481c` | Bank Accounts                        | 連想配列               |     AC     |   78   |               [リンク](./abc/abc481/c_bank_accounts.cpp)                |
| `abc481d` | Autopilot                            | 最短経路               |     AC     |  581   |                 [リンク](./abc/abc481/d_autopilot.cpp)                  |
| `abc481e` | Most Brilliant Starry Sky            |                        |            |  1326  |         [リンク](./abc/abc481/e_most_brilliant_starry_sky.cpp)          |
| `abc482a` | Nigiri                               | 実装                   |     AC     |   12   |                   [リンク](./abc/abc482/a_nigiri.cpp)                   |
| `abc482b` | Blank Bingo                          | 全探索                 |     AC     |   65   |                [リンク](./abc/abc482/b_blank_bingo.cpp)                 |
| `abc482c` | Band Count                           | 二分探索               |     AC     |  486   |                 [リンク](./abc/abc482/c_band_count.cpp)                 |
| `abc482d` | Wannabe Zombie                       | 考察                   |     AC     |  766   |               [リンク](./abc/abc482/d_wannabe_zombie.cpp)               |
| `abc482e` | Diameter Endpoint Colors             | 木構造・組み合わせ     |            |  1531  |          [リンク](./abc/abc482/e_diameter_endpoint_colors.cpp)          |
| `abc483a` | Double-Sided Printing                | 実装                   |     AC     |   16   |           [リンク](./abc/abc483/a_double_sided_printing.cpp)            |
| `abc483b` | Flip Card Stack                      | 実装                   |     AC     |   75   |              [リンク](./abc/abc483/b_flip_card_stack.cpp)               |
| `abc483c` | Second Choice Election               | 実装・データ構造       |     AC     |  770   |           [リンク](./abc/abc483/c_second_choice_election.cpp)           |
| `abc483d` | Glitchy Robot                        | 全探索・セグメント木   |     AC     |  965   |               [リンク](./abc/abc483/d_glitchy_robot.cpp)                |
| `abc483e` | Typo Pairs                           |                        |            |  1473  |                 [リンク](./abc/abc483/e_typo_pairs.cpp)                 |

## ARC

| ID        | 名前               | 種類     | ステータス | 難易度 |                      リンク                       |
| --------- | ------------------ | -------- | :--------: | :----: | :-----------------------------------------------: |
| `arc044a` | 素数判定           | 数学     |     UP     |  560   |      [リンク](./renshu/arc044a_素数判定.cpp)      |
| `arc161b` | Exactly Three Bits | 二分探索 |     UP     |  563   | [リンク](./renshu/arc161b_exactly_three_bits.cpp) |

## AGC

一生このコンテストに参加できないかもしれません。

## AWC

| ID         | 名前             | 種類                 | ステータス |                     リンク                     |
| ---------- | ---------------- | -------------------- | :--------: | :--------------------------------------------: |
| `awc0178a` | 円高と円安       | 実装                 |     UP     |    [リンク](./awc/awc0178/a_円高と円安.cpp)    |
| `awc0178b` | 田舎町の駅       | 実装                 |     UP     |    [リンク](./awc/awc0178/b_田舎町の駅.cpp)    |
| `awc0178c` | 荷物の回収       | 貪欲方               |     UP     |    [リンク](./awc/awc0178/c_荷物の回収.cpp)    |
| `awc0178d` | 道路網の整備     |                      |            |    [リンク](./awc/awc0178/d_荷物の回収.cpp)    |
| `awc0178e` | 照明スイッチ     | ビット演算・最短経路 |     UP     |   [リンク](./awc/awc0178/e_照明スイッチ.cpp)   |
| `awc0179a` | 売り主の値札     | 実装                 |     AC     |   [リンク](./awc/awc0179/a_売り主の値札.cpp)   |
| `awc0179b` | 焼き肉の順番     | 配列                 |     AC     |   [リンク](./awc/awc0179/b_焼き肉の順番.cpp)   |
| `awc0179c` | 学園祭の出店計画 | 実装                 |     AC     | [リンク](./awc/awc0179/c_学園祭の出店計画.cpp) |

## Educational DP Contest

| ID     | 名前         | 種類  | ステータス |              リンク               |
| ------ | ------------ | ----- | :--------: | :-------------------------------: |
| `dp_a` | Frog 1       | 1DDP  |     AC     |    [リンク](./dp/a_frog_1.cpp)    |
| `dp_b` | Frog 2       | 1DDP  |     AC     |    [リンク](./dp/b_frog_2.cpp)    |
| `dp_c` | Vacation     | 2DDP  |     AC     |   [リンク](./dp/c_vacation.cpp)   |
| `dp_d` | Knapsack 1   | 2DDP  |     AC     |  [リンク](./dp/d_knapsack_1.cpp)  |
| `dp_e` | Knapsack 2   | 2DDP  |     AC     |  [リンク](./dp/e_knapsack_2.cpp)  |
| `dp_f` | LCS          | 2DDPR |     AC     |     [リンク](./dp/f_lcs.cpp)      |
| `dp_g` | Longest Path | 1DDP  |     AC     | [リンク](./dp/g_longest_path.cpp) |
| `dp_h` | Grid 1       | 2DDP  |     AC     |    [リンク](./dp/h_grid_1.cpp)    |
| `dp_i` | Coins        | 2DDP  |     AC     |    [リンク](./dp/i_coins.cpp)     |

## 鉄則

![README](./tessoku/README.md)

## 典型９０

![README](./typical90/README.md)

## Others

| ID                           | 名前        | 種類     | ステータス | 難易度 |                            リンク                             |
| ---------------------------- | ----------- | -------- | :--------: | :----: | :-----------------------------------------------------------: |
| `code_festival_2017_qualb_b` | Problem Set | 連想配列 |     UP     |  568   | [リンク](./renshu/code_festival_2017_qualb_b_problem_set.cpp) |
