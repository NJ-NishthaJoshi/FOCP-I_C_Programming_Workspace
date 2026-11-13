/*Q6. Calculate Quotient and Remainder
 Implement a C program to accept two integers and calculate:
  • Quotient 
  • Remainder
   Use appropriate arithmetic operators and display both results. 
   Example: Input: 17 5 
   Quotient = 3 
   Remainder = 2 */

#include <stdio.h>
int main()
{
    //variable initalization
    int n1;
    int n2;
    int q;
    int r;

    printf("Enter the integer numbers for which you want the quotient and remainder.\n");
    printf("Enter the number you want to divide:");
    scanf("%d",&n1);
    printf("Enter the number that is dividend:");
    scanf("%d",&n2);
    if (n2==0)
    {
        printf("Number can be divide by zero.\n");
    }
    else
    {
        q=n1/n2;
        r=n1%n2;
        printf("Quotient=%d\n",q);
        printf("Remainder=%d\n",r);

    }
    return 0;

}