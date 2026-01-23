// Write a C program to find factorial of a given number.

#include <stdio.h>
int main(){
    int n;
    long int fac=1;
    
    printf("Enter number : \n");
    scanf("%d",&n);
    
    for(int i=1; i<=n;i++){
        fac *= i;
    }
    printf("Factorial of %d is %d",n,fac);
    return 0;
}

/*
Enter number : 
5
Factorial of 5 is 120
*/

/*
Explanation (simple words, viva-style)
User enters a number n.
Variable fact is initialized to 1.
for loop runs from 1 to n.
Each number is multiplied with fact.
Final factorial value is printed.

Viva explanation (remember these lines)
This program calculates factorial of a number using for loop.
Factorial is multiplication of numbers from 1 to given number.

Viva quick questions
Q. What is factorial?
→ Factorial of n is 1 × 2 × 3 × ... × n.
Q. Why fact is initialized to 1?
→ Because factorial multiplication starts from 1.
Q. Which loop is used?
→ for loop.
*/
