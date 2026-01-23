// Write a program to read marks from keyboard and your program should displayequivalent grade according to following table(if else ladder)
//  Marks Grade
//  100 - 80 Distinction
//  79 - 60 First Class
//  59 - 40 Second Class
//  < 40 Fail

#include <stdio.h>
int main(){
    int n;
    
    printf("Enter your grade : ");
    scanf("%d",&n);
    
    if(n<=100 && n>=80){
        printf("Distinction\n");
    }else if(n<=79 && n>=60){
        printf("First Class\n");
    }else if(n<=59 && n>=40){
        printf("Second Class\n");
    }else if(n<=39 && n>=0){
        printf("Fail\n");
    }else{
        printf("Invalid Input\n");
    }
    return 0;
}

/*
Enter your grade : 58
Second Class
*/

/*
Explanation (according to your code style)
Program reads marks from keyboard.
if–else ladder is used to check different ranges of marks.
If marks are:
80–100 → Distinction
60–79 → First Class
40–59 → Second Class
Below 40 → Fail
If marks are less than 0 or greater than 100, input is invalid.

Viva explanation (yaad rakhne wali lines)
This program displays grade of a student using if–else ladder based on marks range.

Viva quick questions
Q. Why if–else ladder is used here?
→ Because multiple conditions are checked in sequence.
Q. Why validation is added?
→ Marks cannot be less than 0 or greater than 100.
*/
