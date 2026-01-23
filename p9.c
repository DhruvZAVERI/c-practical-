// Write a program to read three numbers from keyboard and find out maximum out ofthese three.
// (nested if else)

#include <stdio.h>
int main(){
    int a,b,c;
    
    printf("Enter 3 numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>b){
        if(a>c){
            printf("A is largest");
        }else{
            printf("C is largest");
        }
    }else{
        if(b>c){
            printf("B is largest");
        }else{
            printf("C is largest");
        }
    }
    return 0;
}

/*
Enter 3 numbers: 
5
10
15
C is largest
*/

/*
Explanation (according to code, simple words)
Three integers a, b, and c are taken from the user.
First if compares a and b.
Inside it, another if compares the larger value with c.
In the else part, b is compared with c.
The largest number is printed.
This is called nested if–else because one if is inside another if.

Viva explanation (remember these lines)
This program finds the maximum of three numbers using nested if–else.
First two numbers are compared, then the result is compared with the third number.

Viva quick questions
Q. Why nested if–else is used?
→ To compare more than two conditions step by step.
Q. Can this be done using else-if?
→ Yes, but this program specifically uses nested if–else as asked.
*/
