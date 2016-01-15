//Question 1 and 2 from Chapter 7 Mathematics and Probability in Cracking the Coding Interview

/*
Question 1
You have a basketball hoop and someone says that you can play one of two games.
	Game 1: You get one shot to make the hoop
	Game 2: You get three shots and you have to make two of the three shots.
If p is the probability of making a particular shot, for which values of p should you pick one game or another?

Solution
The probability of winning Game 1 is identically p.
The probability of winning Game 2 is P(2 of 3) + P(3 of 3) = 3 p^2 (1-p) + p^3 = 3p^2 - 2p^3

We will choose which game to play based on which probability is greater
if P(G1) > P(G2) we will play G1.

p > 3p^2 - 2p^3
1 > 3p - 2p^2
2p^2 - 3p + 1 > 0
(2p - 1)(p - 1) > 0
So both are negative or both are positive. But p - 1 will always be negative, so both are negative.
2p - 1 < 0
2p < 1
p < .5
We play Game 1 if p < 0.5.
If the p is 0, 0.5 or 1, then it really doesn't matter.
Otherwise, we play Game 2.

Question 2
There are three ants on different vertices of a triangle. What is the probability of collision (between any two or all of them)
if they start walking on the sides of the triangle? Assume that each ant randomly picks a direction, with either direction being
equally likely to be chosen, and that they walk at the same speed. Similarly, find the probability of collision with n ants on an
n-vertex polygon.

Solution
The ants will only not collide if they all pick the same direction. The chances of that happening is (1/2)^(n-1) on an n-vertex polygon.
For a triangle, the chance is 1/4. So the chance of a collision occuring is 1-(1/2)^(n-1) and 3/4 for the n-vertex polygon and the
triangle, respectively.
*/

int main()
{
	return 0;
}