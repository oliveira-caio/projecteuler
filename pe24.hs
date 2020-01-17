acrescenta :: Int -> [Int] -> [[Int]]
acrescenta n [] = [[n]]
acrescenta m (n:ns) = (m:n:ns) : map (n:) (acrescenta m ns)

permuta :: [Int] -> [[Int]]
permuta [] = [[]]
permuta (n:ns) = concat (map (acrescenta n) (permuta ns))
--permuta (m:n:ns) = map (m:) ) ++ permuta (n:m:ns)

qsort :: Ord a => [a] -> [a]
qsort [] = []
qsort (n:ns) = qsort leq ++ [n] ++ qsort geq
               where leq = [m | m <- ns, m <= n]
                     geq = [m | m <- ns, n <= m]

final :: [Int] -> [Int]
final ns = snd (head (reverse (zip [1..1000000] (qsort (permuta ns)))))
