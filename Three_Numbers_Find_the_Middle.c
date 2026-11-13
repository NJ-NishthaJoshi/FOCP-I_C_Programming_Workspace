/*2. Three Numbers – Find the Middle 
Implement a program that takes three different integers a, b, and c and prints the middle value (neither maximum nor minimum).
 Example: 
 Input: 10 25 15 
 Output: 15 
 */

#include <stdio.h>
int main()
{
    //variable initalization
    int n1;
    int n2;
    int n3;

    //accept input from user
    printf("Please enter three different number.\n");
    printf("Enter the 1st number:");
    scanf("%d",&n1);
    printf("Enter the 2nd number:");
    scanf("%d",&n2);
    printf("Enter the 3rd number:");
    scanf("%d",&n3);

    //condition
    if ((n1>n2) && (n1<n3))
    {
        printf("The middle value:%d",n1);
    }
    else if ((n2>n1) &(n2<n3))
    {
        printf("The middle value:%d",n2);
    }
    else
    {
        printf("The middle value:%d",n3);
    }
    return 0;

}