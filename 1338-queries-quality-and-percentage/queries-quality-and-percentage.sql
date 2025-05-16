# Write your MySQL query statement below
SELECT 
    query_name,
    ROUND(AVG(1.0 * rating / position), 2) AS quality,
    ROUND(100.0 * SUM(CASE WHEN rating < 3 THEN 1 ELSE 0 END) / COUNT(*), 2) AS poor_query_percentage
FROM queries
GROUP BY query_name;
