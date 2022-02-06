# c-projects

# Basics of c++

1 Template:
#include <bits/stdc++.h>
using namespace std; 
int main() 
{ 
// solution comes here 
}
This library bits/stdc++/h can be used to replace iostream, vector, and string 
How to run c++ code: If you name your file test.cpp
-std=c++11 -O2 -Wall test.cpp -o test                  or                         g++ -o test test.cpp
                                                                                                    ./test
./ test


2 Concept of CPU, RAM, and Secondary memory


The secondary memory is what stores the data types. Each column represents a byte and each byte contains 8 bits. Certain number of columns can represent the executable file .exe. That is, the file after the programme has been compiled. That executable file goes to the temporary random access memory and is controlled by the CPU in interpreting those binary numbers. 

Problem 0: Basic sum program 


This program outputs the sum of two integers. This program also emphasizes data types
For int, it takes up 32 bits worth of information on the secondary memory, that is 4 bytes, and in every byte there are 8 bits, so 8 times 4 is 32 and every byte is represented as a column in the secondary application which can make up an entire application. 

3 Max value of int data type
To illustrate the max value of the int data type, I inputted 2^32 + 2, and the compiler did not like that so it just did the calculation as 2^32 +0. This emphasizes that the max value of int is 2^n, where n is the total number of bits the data type can occupy. 

Problem1: days conversion  
Write a program so that the user can input the number of days they were traveling during the holiday break, and print out the information in weeks and additional days. 

Solution:
Created variables for the number of days the user would input, weeks for calculating the number of weeks given how many days the user would input, and days left was the calculation for the remaining days that were left after the initial weeks calculation. 
This is a simple division and remainder problem, and you need to use the following concepts:
Integer data type
Inputting and storing data with cout and cin commands
Operators like division and mod(remainder operator)

After creating the variables I outputed a string that asked the user the number of days that they traveled and stored it in the days variable with the cin command

Then I did the calculations with dimensional analysis(conversion)

7 days = 1 week

So the calculation would be n days * 1weeks/7 days. 

Doing it this way made me go back to the fundamental engineering concepts I learned in undergrad, units conversion. I was making the mistake of dividing days by 4, confused that dividing by four would converted months to weeks, not days to weeks or vice versa for the former. 

daysLeft was the variable I made to store the number of days left after dividing. Like in elementary school, we learned to divide numbers and the number that was left at the bottom after finishing the calculations, was the remainder. 

That is what the mod operator does, it takes the remainder of the division, so if we wanted to divide the days by 7, we should also do days ‘mod’ 7, or days%7;

 Finally I printed the the weeks and the daysLeft variables in a way that a normal user can understand


 Results:
Trial 1

Trial 2

Trial 3


Modified the code each time to make the gui prettier and make more sense to the user with no programming knowledge. 

4 Float and Double data types.
Float can hold up to 4 columns of memory while double can hold double of that, which is 8.
So  float can hold 32 bits or 4 bytes, while double can hold 64 bits or 8 bytes. Both of them are used for decimal or integer values, except if an integer is used, it will print out for example, 2.0, not 2.

Problem 2: Area of a circle
Calculate the area of a circle after the user enters a radius of any size

Solution:
First I outputted a please enter radius prompt, and stored it in the rad variable using the double data type, in case the user enters a decimal that is longer than the allowed bits stored in a float. I also created an Area variable to store the calculation of the area of a circle. 

Then, I used the Area of a circle formula:

A= *r2

In code this represents:
Area = M_PI*rad*rad;

M_PI is a constant variable stored in the cmath formula, this library allows you to enter the pi variable without any errors. 

Another way to add the pin variable is to just make a constant variable pi and approximate it to the nearest pi digit that you know, but this will still not be as accurate as using the cmath library pi variable.



Results 



5 Typecasting 

Typecasting can be used when you improperly assign a wrong data type to a number or character. To fix this, one must write the correct data type in a parenthesis before using the number or character. In this example, they are converting the originally integer 6 into double format, which happens to be a decimal. 

Implicit casting: C++ will always calculate a value to its most accurate form

For example, if you divide a decimal by a integer, the result will be a decimal in order to not lose any accuray. 

The char data type: Allows you to store letters in code. 

The inner representation of what happens in the computer:

Each char data uses 1 byte(8 bits). 2^8 = 256

Ascii maps each letter to a value in the memory in the form of hexadecimal, binary, or decimal form. 





Problem 3: What is my ASCII value?

Write a program that reads from the user a single character, and prints it’s ASCII value. 

Example:
Please enter a character:
T
The ASCII value of T is 84

Solution:
Similar to other problems, with only one difference. The formula used was asciiValue = (int)character. I used the character variable for the input character and asciiValue to store the input character as its ascii value. Since all ascii values in the computer are hardcoded into the memory, it was easy just to equate the two values and turn the character into an int via typecasting, otherwise there will be an error. 




Results:

Had to use a different compiler because my compiler was giving me issues even though the code was correct. 

6 Assigning characters to the char data type

Must use ‘ ’ around the letter that you want to be assigned

For example:

If you want to assign the letter a to a variable of data type char:
Char var = ‘a’;
And this is stored into the variable var for later use. 
Other literals can include ‘B’ ‘3’ ‘$’

New line character: brakes the line ‘\n’ or “/n”


Literals manipulation 

If you want to get the ascii of the one next to the letter that you input then you must add that literal by 1

int main()
{

ch1  = ‘a’
ch2 = ‘a’ + 1;


cout << ch2<< end;
cout << ‘a’ + 1<< endl;
cout << (char)(‘a’ + 1)<< endl;           // changes the number that represents a+1 and changes it to char       
return 0;
}

Problem 4: Convert to upper case
Write a program that reads from the user a lower case letter, and prints it’s corresponding upper case letter. 

Example:
Please enter a lower case letter:
t
The upper case of t is T
Solution:

This problem was a little tricky. You have to know that ‘a’ means the ascii value and when you write (int)’a’, that is the number of ascii values of a. 

First you need to convert and make the offset. The offset is the difference between the start of the table, ‘a’, and the lowercase number you chose, lets say t. 

Now you have to add that offset to the upper case value ‘A’ to get the anwer




Results:

7 Strings and literals:

A string is a text, or sentence while literals are a sequence of characters
To use the strings data type, add a new library called <string> with #include <string>

Example



8 Branching statements

If(condition)
{
	code happens if the condition is met
}

else
{
	This code will happen if the condition above is not met
}

Problem 5: absolute value

Initial thought about this was to make the user input a number and if the number was positive, the number would print out, else the number times -1 would print, storing that into a new variable. 
(20 lines)


A more efficient way was found, where there are less lines of code and less variables used. 

This more efficient way of solving the problem, took the input of the user, and if that input was less than 0, it would point out that number times -1 and store it in that same variable. (17 lines )


input *= -1 is just input = input * -1
9 Set precision 

Using library <iomanip>
cout<< setprecision(decimal place) << variable;

This is used to write your answers to the amount of decimal places you want. For example, if you want to round a decimal to 2 decimal places  inside a variable sum  then you must do:

cout<< setprecision (2) << sum;

