// Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday

#include <stdio.h>
int main(){
    int n;
    printf("enter number for day (1 to 7) : \n");
    scanf("%d",&n);
    
    switch(n){
        case 1:
            printf("Sunday");
        break;
        case 2:
            printf("Monday");
        break;
        case 3:
            printf("Tuesday");
        break;
        case 4:
            printf("Wednesday");
        break;
        case 5:
            printf("Thursday");
        break;
        case 6:
            printf("Friday");
        break;
        case 7:
            printf("Saturday");
        break;
        default:
            printf("Invalid Input");
    }
    return 0;
}

/*
enter number for day : 
7
Saturday
*/

/*
Explanation (simple words, viva-style)
Program reads a number from 1 to 7.
switch case is used to match the number.
Each case prints the corresponding day.
default case handles invalid input.

Viva explanation (remember these lines)
This program prints day name according to number using switch case.
If number is not between 1 and 7, it prints invalid input.

Viva quick questions
Q. Why switch case is used here?
→ Because we have multiple fixed choices.
Q. What is default case?
→ It executes when input does not match any case.
*/
