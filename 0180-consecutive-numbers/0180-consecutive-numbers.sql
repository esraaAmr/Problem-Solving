# Write your MySQL query statement below

SELECT DISTINCT a.num AS ConsecutiveNums
FROM Logs a, Logs b, Logs c
WHERE a.num = b.num
AND b.num = c.num
AND a.id = b.id - 1
AND b.id = c.id - 1;

