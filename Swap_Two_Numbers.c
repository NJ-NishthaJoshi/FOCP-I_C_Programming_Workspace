/*Q5. Swap Two Numbers
 Implement a C program to accept two integer values and swap their values using a third variable.
  Display the values: 
  • Before swapping 
  • After swapping 
  Example: 
Before swapping: 10 20
After swapping: 20 10 
*/
#include <stdio.h>
int main()
{
    //variable initalization
    int n1;
    int n2;
    int temp;

    //accept input from user
    printf("Enter the two number you want to swap\n");
    printf("enter the 1st number:");
    scanf("%d",&n1);
    printf("enter the 2nd number:");
    scanf("%d",&n2);

    //before swapping
    printf("Before swapping: %d %d\n",n1,n2);

    //swap number
    temp=n1;
    n1=n2;
    n2=temp;

    //after swapping
    printf("After swapping: %d %d",n1,n2);
    return 0;

}