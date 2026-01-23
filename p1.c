// Write a program to that performs as calculator (addition, multiplication, division, subtraction)

#include <stdio.h>

int main(){
  int choice;
  int a,b;
  
  printf("Enter Two Numbers :\n");
  scanf("%d %d",&a,&b);
  
  printf("1.Addition\n");
  printf("2.Subtraction\n");
  printf("3.Multiplication\n");
  printf("4.Divisoin\n");
  scanf("%d",&choice);
  
  switch(choice){
    case 1:
      printf("Addition is %d \n",a+b);
    break;
    case 2:
      printf("Subtraction is %d \n",a-b);
    break;
    case 3:
      printf("Multiplication is %d \n",a*b);
    break;
    case 4:
      printf("Division is %d \n",a/b);
    break;
    default:
      printf("Invalid Input !!!");
  }
  return 0;
}

/*
Enter Two Numbers :
5
10
1.Addition
2.Subtraction
3.Multiplication
4.Divisoin
3
Multiplication is 50 
*/


/*
Explanation (for Viva – easy lines)
Program takes two numbers as input
User selects operation using menu
switch case is used to perform operation
Division by zero is checked
Result is displayed

Exam / Viva short explanation (yaad rakhne wali)
This program performs calculator operations using switch case.
User selects operation and result is displayed.

Viva ke liye 3 sure questions + answers
Q1. Why switch case used?
→ To select one operation from many choices.
Q2. Can we use if-else instead of switch?
→ Yes, but switch is better for menu driven programs
*/
