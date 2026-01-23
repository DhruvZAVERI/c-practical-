// Write a program to find area of triangle(a=h*b*.5)
//  a = area h = height b = base.

#include <stdio.h>
int main(){
    float a,b,h;
    
    printf("Enter Height :\n");
    scanf("%f",&h);
    printf("Enter Base :\n");
    scanf("%f",&b);
    
    a = 0.5*h*b;
    
    printf("Area of Trinagle = %.2f",a);
    
    return 0;
}

/*
Enter Height :
5
Enter Base :
3
Area of Trinagle = 7.50
*/


/*
Explanation (simple words)
b → base of triangle
h → height of triangle
Formula used: a = 0.5 * b * h
Result is printed as area

Viva / Exam short explanation
This program calculates the area of a triangle using base and height.
Area is calculated using the formula 0.5 × base × height.

Viva quick questions
Q. Why float used?
→ Area can be in decimal value.
Q. Formula of triangle area?
→ 0.5 × base × height.
*/
