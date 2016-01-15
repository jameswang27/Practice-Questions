//All the Chapter 6 brain teasers from Cracking the Coding Interview

/*
Question 1
You have 20 bottles of pills. 19 bottles have 1.0 gram pills, but one has pills of weight 1.1 grams. Given a scale that provides
exact measurement, how would you find the heavy bottle? You can only use the scale onece.

Solution
Assuming that each bottle has enough pills for this solution to work, I would label each pill bottle from 1 to 20. By taking the
number of pills corresponding to each label (1 for Bottle 1, 2 for Bottle 2, etc.) and weighing them all together, by examining 
the number of times the extra 0.1 gram appears I can figure out which bottle I was using. For example, doing this with all pills
of weight 1.0 grams would result in a weight of 110.0 grams. However, using my method on the given bottles will result in a greater
number, such as 110.9. In this example, I would know that Bottle 9 is the correct bottle because there is an extra weight of 0.9.

Question 2
There is an 8x8 chess board in which two diagonally opposite corners have been cut off. You are given 31 dominos, and a single 
domino can cover exactly two squares. Can you use the 31 dominos to cover the entire board? Prove your answer (by providing an 
example or showing why it's impossible).

Solution
It is not possible. Opposite corners of the board are the same color, but a domino must cover one black and one white square. 
Hence, we now have a board that has an unequal number of the two colors but cannot be covered with the restrictions of a domino.

Question 3
You have a five-quart jug, a three-quart jug, and an unlimited supply of water (but no measuring cups). How would you come up with
exactly four quarts of water? Note that the jugs are oddly shaped, such that filling up exactly "half" of the jug would be impossible.

Solution
Label the five-quart jug as 5 and the three-quart jug as 3. Fill 5, pour it into 3, so that 2 quarts remain in 5. Empty 3, pour the 
2 that are in 5 into the 3, then fill 5 again. Pour 5 into the 3 until it is full, and the remaining water in 5 is 4 quarts. This
solution uses 10 quarts of water in total.

Question 4
A bunch of people are living on an island, when a visitor comes with a strange order: all blue-eyed people must leave the island as
soon as possible. There will be a flight out at 8:00 PM every evening. Each person can see everyone else's eye color, but they do not
know their own (nor is anyone allowed to tell them). Additionally, they do not know how many people have blue eyes, although they do
know that at least one person does. How many days will it take the blue-eyed people to leave?

Solution
Consider the case where there is only one blue-eyed person. Then, he will realize he is the only blue-eyed person and leave on the 
first day. Now consider the case where there are two. According to each one they will see one blue-eyed person, namely each other.
If on the first day that person doesn't leave then each blue-eyed person will realize that they themselves are also blue-eyed and leave
on the next day. This process is recursive for any number of blue-eyed people. Hence the blue-eyed people will all leave on the same 
day after n days have gone by, where n is the number of blue-eyed people.

Question 5
There is a building of 100 floors. If an egg drops from the Nth floor or above, it will break. If it's dropped from any floor below,
it will not break. You're given two eggs. Find N, while minimizing the number of drops for the worst case.

Solution
Consider dropping on floor 50. If the egg breaks then you'll potentially have to drop it 49 more times (as in, either 49 or 50 was the
N). This is not good enough. Now consider dropping at 10, then 20 if it survives, then 30, and so on. This is better, but if N was
99 or 100 then we would have to drop it a total of 19 times. We can still do a little better. What we do is that we account for each
potential additional drop we would have to do with the first egg by lowering the interval that we increase the height from by one each
time. The answer to 100 floors is 14. We start on the Floor 14, then 27, then 39, then 50, then 60, then 69, then 77, then 84, then
90, then 95, then 99. No matter which one the first egg breaks on, the worst case will be 14.

Question 6
There are 100 closed lockers in a halway. A man begins by opening all 100 lockers. Next, he closes every second locker. Then, on his
third pass, he toggles every third locker (closes it if it is open or opens if it is closed). This process continues for 100 oasses,
such that on each pass i, the man toggles every ith locker. After his 100th pass in the hallway, in which he only toggles locker #100,
how many lockers are open?

Solution
There are 10 lockers open, one corresponding to each square number <= 100 (1, 4, 9, 16, 25, 36, 49, 64, 81, 100). This is because on
each pass i what the man is doing is toggling every locker that divides into i. What this means is that each locker will be toggled
the same number of times as its number of divisors. Because the lockers start out closed and non-square numbers have an even number
of divisors. Every non-square number will end up closed. Because a square number has an odd number of divisors, each locker with a 
square number on it will be open at the end of his passes.
*/

int main()
{
	return 0; 
}