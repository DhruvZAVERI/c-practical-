// Write a C program to check whether the entered character is capital, small letter,digit or any special character.

#include <stdio.h>
int main(){
    char ch;
    
    printf("Enter single character : \n");
    scanf("%c",&ch);
    
    if(ch>='A' && ch<='Z'){
        printf("CAPITAL LATTER\n");
    }else if(ch>='a' && ch<='z'){
        printf("small letter\n");
    }else if(ch>='0' && ch<='9'){
        printf("Digit\n");
    }else{
        printf("Special Character\n");
    }
    return 0;
}

/*
Enter single character : 
D
CAPITAL LATTER
*/

/*
Explanation (according to code, easy words)
A character is taken from user using scanf.
First condition checks if character is between A to Z
→ then it is a Capital Letter.
Second condition checks if character is between a to z
→ then it is a Small Letter.
Third condition checks if character is between 0 to 9
→ then it is a Digit.
If none of the above conditions match
→ it is a Special Character.

Viva explanation (remember these lines)
This program checks whether the entered character is capital, small, digit or special character using ASCII value comparison and if–else statement.

Viva quick questions
Q. Why characters are compared with 'A' and 'Z'?
→ Because characters have ASCII values.
Q. Which statement is used for decision making?
→ if–else statement.
Q. Give example of special character.
→ @, #, $, %, !
*/
