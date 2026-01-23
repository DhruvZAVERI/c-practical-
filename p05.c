// Write a C program to enter a distance in to kilometre and convert it in to meter, feet,inches and centimetre.

#include <stdio.h>
int main(){
    // 1 km = 1000 meters
    // 1 km = 3280.84 feet
    // 1 km = 39370.1 inches
    // 1 km = 100000 centimeters
    
    float kilometer;
    float meter = 1000;
    float feet = 3280.84;
    float inch = 39370.1;
    float centimeter = 100000;
    
    printf("Enter Kilometer : \n");
    scanf("%f",&kilometer);
    
    printf("Distance in meters : %.2f\n",kilometer*meter);
    printf("Distance in feet : %.2f\n",kilometer*feet);
    printf("Distance in inches : %.2f\n",kilometer*inch);
    printf("Distance in centimeters : %.2f\n",kilometer*centimeter);
    
    return 0;
}

/*
Enter Kilometer : 
5
Distance in meters : 5000.00
Distance in feet : 16404.20
Distance in inches : 196850.50
Distance in centimeters : 500000.00
*/

/*
Explanation (simple words)
User enters distance in kilometer
Program converts it into:
meter
feet
inches
centimeter
Conversion formulas are applied
Result is displayed

Viva / Exam short explanation
This program converts distance from kilometer into meter, feet, inches and centimeter using standard conversion formulas.

Viva quick questions
Q. Why float data type used?
→ Converted values can be decimal.
Q. What is 1 km in meter?
→ 1000 meters.
*/
