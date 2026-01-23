// Write a C program to interchange two numbers.

#include <stdio.h>

int main() {
    int a=5, b=10, temp;

    printf("Before interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("\n\nAfter interchange:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}


/*
Before interchange:
a = 5
b = 10

After interchange:
a = 10
b = 5
*/

/*
Explanation (simple words)
a and b store the two numbers
temp is used to temporarily store value of a
Values of a and b are swapped
Final values are printed

Viva / Exam short explanation
This program swaps two numbers using a temporary variable.
Value of first number is stored in temp and then exchanged.

Viva quick questions
Q. Why temp variable is needed?
→ To store value temporarily during swapping.
*/
