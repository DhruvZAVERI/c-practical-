// Write a C program to find that the accepted number is Negative, Positive or Zero.

#include <stdio.h>
int main(){
    int n;
    
    printf("Enter Number : \n");
    scanf("%d",&n);
    
    if(n>0){
        printf("Positive Number");
    }else if(n<0){
        printf("Negative number");
    }else{
        printf("Number is 0");
    }
    return 0;
}

/*
Enter Number : 
5
Positive Number
*/

/*
Explanation (simple words)
User enters a number
If number is greater than 0 → Positive
If number is less than 0 → Negative
If number is equal to 0 → Zero

Viva / Exam short explanation
This program checks whether the entered number is positive, negative or zero using if–else statement.

Viva quick questions
Q. Which statement is used here?
→ if–else statement
Q. What happens if number is 0?
→ It prints “Number is Zero”.
*/
