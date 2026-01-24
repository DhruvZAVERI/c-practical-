// Write a program to reverse a number.

#include <stdio.h>
#include <string.h>

int main(){
    char n[100];
    
    printf("Enter numbers :\n");
    scanf("%s",n);
    
    for(int i = strlen(n)-1; i>=0; i--){
        printf("%c",n[i]);
    }
    return 0;
    
    // option program but it contain only 18-19 digit
    /*
    #include <stdio.h>

int main() {
    long long n, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reversed number = %lld", reverse);

    return 0;
}

    */
}

/*
Enter numbers :
9876543210
0123456789
*/

/*
Explanation (step-by-step, easy words)
char num[100]
Character array is used to store the number as string.
scanf("%s", num);
Reads the number as text, not integer.
strlen(num)
Finds the length of the entered number.
for loop runs from:
last character → first character
printf("%c", num[i]);
Prints characters in reverse order.
Program ends.

Viva Explanation (MOST IMPORTANT)
Yaad rakhne wali lines, seedha bolo:
This program reverses a number by reading it as a string.
It avoids integer size limitation and works for large numbers also.

Viva me agar examiner puche
Q1. Why did you use string instead of integer?
Because integer has size limitation, but string can handle large numbers.
Q2. Why strlen() is used?
To get the length of the number for reverse looping.
Q3. Which header file is required for strlen?
string.h
Q4. Is this better than integer method?
Yes sir, for large numbers this method is better.
*/
