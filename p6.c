// Write a program to compute Fahrenheit from centigrade (f=1.8*c +32).

#include <stdio.h>
int main(){
    float c,f;
    
    printf("Enter Centigrade:\n");
    scanf("%f",&c);
    
    f=1.8*c+32;
    printf("Fahrenheit = %.2f",f);
    return 0;
}

/*
Enter Centigrade:
502.5
Fahrenehit = 936.50
*/


/*
Explanation (simple words)
c → temperature in centigrade
f → temperature in Fahrenheit
Formula used: f = 1.8 * c + 32
Result is displayed

Viva / Exam short explanation
This program converts temperature from centigrade to Fahrenheit using the formula F = 1.8 × C + 32.

Viva quick questions
Q. Why float used?
→ Temperature value can be decimal.
Q. Formula to convert C to F?
→ F = 1.8 × C + 32.
*/
