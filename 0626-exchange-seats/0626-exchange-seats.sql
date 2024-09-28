# Write your MySQL query statement below
select id,ifnull((case when id mod 2=0 then lag(student,1) over() else lead(student,1) over() end),student) as student from Seat;