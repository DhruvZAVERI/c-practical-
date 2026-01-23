//  Write a C program to find out the Maximum and Minimum number from given10 numbers

#include <stdio.h>
int main(){
    int max,min;
    int a[10];
    
    printf("Enter 10 numers :\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(int i =1;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
}

/*
Enter 10 numers :
10
20
30
40
50
60
70
80
90
100
Max = 100
Min = 10
*/

/*
Explanation (simple words, tumhare style me)
An array of size 10 is declared to store numbers.
User enters 10 numbers using a for loop.
First element is taken as both max and min.
Loop compares each number:
If number is greater → update max
If number is smaller → update min
Finally, maximum and minimum values are printed.

Viva explanation (yaad rakhne wali lines)
This program finds the maximum and minimum number from 10 values using array and for loop.

Viva quick questions
Q. Why array is used?
→ To store multiple numbers.
Q. Why max and min initialized with a[0]?
→ To start comparison from first element.
Q. How many loops are used?
→ Two for loops.
*/
