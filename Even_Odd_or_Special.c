/* Assigment 2
1. Even, Odd or Special 
Implement a C program that takes an integer n.
• If n is divisible by both 2 and 5, print Special. 
• If it is divisible only by 2, print Even. 
• If it is divisible only by 5, print Five.  
• Otherwise, print Odd/Other.  

*/
#include <stdio.h>
int main()
{
    //variable initalization
    int n;

    //accept input from user
    printf("enter the number:");
    scanf("%d",&n);

    //condition
    if ((n%2==0) && (n%5==0))
    {
        printf("Special");
    }
    else if(n%2==0)
    {
        printf("Even");
    }
    else if(n%5==0)
    {
        printf("Five");
    }

    else{
        printf("Odd\\other");
    }

    return 0;

}