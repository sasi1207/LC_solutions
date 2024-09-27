
SELECT cty.category, COALESCE(COUNT(q.category), 0) accounts_count FROM (
    SELECT 
        CASE WHEN income < 20000 THEN 'Low Salary' 
            WHEN income >= 20000 AND income <= 50000 THEN 'Average Salary'
            WHEN income > 50000 THEN 'High Salary' END category
    FROM Accounts
) AS q
RIGHT JOIN (SELECT 'Low Salary' AS category UNION ALL SELECT 'Average Salary' UNION ALL SELECT 'High Salary')
AS cty ON q.category = cty.category
GROUP BY category
