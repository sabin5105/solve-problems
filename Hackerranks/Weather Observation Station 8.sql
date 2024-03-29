SELECT DISTINCT CITY
FROM STATION
WHERE CITY REGEXP '^[AEIOU]' and CITY REGEXP '[AEIOU]$';


/* combined */
SELECT DISTINCT CITY FROM STATION
WHERE CITY REGEXP '^[aeiou].*[aeiou]$';