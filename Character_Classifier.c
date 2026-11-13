/*6. Character Classifier
 Implement a program that takes a character and prints: 
 • Vowel if it is a, e, i, o, u (uppercase or lowercase)  
 • Digit if it is 0–9  • 
 Consonant if it is an English alphabet but not a vowel  
 • Special Character otherwise  
 Hint: Use logical operators and/or switch. 
 */

#include <stdio.h>
int main (void){

//variable initalization
    char a;

    //accept input from user
    printf("enter the alphabeta:");
    scanf(" %c", &a);
    printf("Character Classifier\n");

    //condition
    if (a >='A' &&  a<= 'Z')
    {
        printf("-->It is uppercase and ");
        switch(a)
     {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("vowel\n", a);
            break;
        default:
            printf("consonant\n", a);
     }

    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("-->It is lowercase and ");
        switch(a)
     {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("vowel\n");
            break;
        default:
            printf("consonant\n");
     }

    }

    else if (a>='0' && a<='9')
    {
        printf("---->It is digit\n");
    }

    else{
        printf("--->It is special Character\n");
    }
    return 0;
}