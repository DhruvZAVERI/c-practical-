// Write a program to read marks of a student from keyboard whether the student is pass or fail
// (using if else)

#include <stdio.h>
int main(){
    int m;
    
    printf("Enter marks:\n");
    scanf("%d",&m);
    
    if(m<=100 && m>=33){
        printf("PASS\n");
    }else if(m<33 && m>=0){
        printf("FAIL\n");
    }else{
        printf("Invalid Input\n");
    }
    return 0;
}

/*
Enter marks:
64
PASS
*/


/*
Viva Explanation 
Program purpose
This program reads marks of a student and checks whether the student is PASS, FAIL, or the input is INVALID using if–else.

Step-by-step explanation (simple lines)
I declared an integer variable m to store marks.
I take marks input from the user using scanf.
First condition checks:
if(m <= 100 && m >= 33)
If marks are between 33 and 100, student is PASS.
Second condition checks:
else if(m < 33 && m >= 0)
If marks are between 0 and 32, student is FAIL.
Else condition:
else
If marks are less than 0 or greater than 100, input is INVALID.
Program ends after displaying the result.

Why I used else-if (important viva line)
I used else if to handle multiple conditions like pass, fail, and invalid input
Why validation is needed
Marks cannot be negative and cannot be greater than 100, so I added validation.
If examiner asks: “Could you do without else-if?”
Answer calmly:
Yes sir, but else-if makes the program clearer and helps to check invalid input also.

One-line viva summary (must remember)
This program checks pass or fail using if-else and also validates marks range from 0 to 100.
*/
