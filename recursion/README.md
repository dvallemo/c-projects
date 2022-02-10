# How to understand recursion
## using a stack

![image](https://user-images.githubusercontent.com/52580367/153442959-e8dc4955-23ad-4704-9129-90c642496e63.png)

The computer only knows the base case when you give it. That is, n == 1. The base case, or simples form, is n=1 in factorial(n), because factorial of 1 is 1

Say that you want to know factorial 4. Then the programmer will say, if n==1 return 1, else, return factorial(n)*factioral(n-1)

The computer will calculate factorial of 4 by saying, factorial 4 is just factorial of 4 times factorial of 3, but it wont knwo what factorial of 3 is

So the computer will go back to the begining of the function and try factorial of 3 times factorial of 2, only to go back to the begining again to check what factorial of 2 is

Until it reaches factorial 1, then it will arrive with the anser fo factorial 4. 

The final step is delivering the factorial 1 to factorial 2, all the way to factorial 4. Now the porgram knows what 4! is. 
