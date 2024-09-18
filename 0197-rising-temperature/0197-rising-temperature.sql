# Write your SQL query statement below
select s.id from Weather f JOIN Weather s 
ON DATEDIFF(s.recordDate,f.recordDate)=1 
where s.temperature > f.temperature;