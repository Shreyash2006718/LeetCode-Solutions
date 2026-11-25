# Write your MySQL query statement below
-- SELECT tweet_id,content
-- FROM Tweets
-- WHERE content LIKE > '_______________';

-- This is waht i thought but its not correct 
SELECT tweet_id
FROM Tweets
WHERE CHAR_LENGTH(content)>15;