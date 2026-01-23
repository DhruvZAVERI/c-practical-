// Write a program to calculate simple interest (i = (p*r*n)/100 )
// i = Simple interest p= Principal amount r = Rate of interest n = Number of years.

#include <stdio.h>
int main(){
    float i,p,r,n;
    
    printf("Enter Amount :\n");
    scanf("%f",&p);
    printf("Enter Rate of Interest :\n");
    scanf("%f",&r);
    printf("Enter Number of Years :\n");
    scanf("%f",&n);
    
    i = (r*n*p)/100;
    
    printf("Simple Rate of Interest is %.2f",i);
    
    return 0;
}

/*
Enter Amount :
50000
Enter Rate of Interest :
2
Enter Number of Years :
1
Simple Rate of Interest is 1000.00
*/


/*
Explanation (simple words)
p → principal amount
r → rate of interest
n → number of years
Formula used: (p * r * n) / 100
Result is stored in i and printed

Viva / Exam short explanation
This program calculates simple interest using principal, rate and time.
Formula used is (P × R × N) / 100.

Viva quick questions
Q. Why float data type used?
→ Interest value can be decimal.
Q. What is simple interest?
→ Interest calculated only on principal amount.
*/
