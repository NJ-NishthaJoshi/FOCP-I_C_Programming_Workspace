/*Q4. Calculate Average of Three Numbers
 Implement a C program to accept three integer values and calculate their average.
  Ensure that the average is displayed as a decimal value, even when all input values are integers. 
  Example: Input: 10 15 20 Output: Average = 15.00*/

#include <stdio.h>
int main()
{
    //variable intialization
    int n1,n2,n3;

    //accept input from user
    printf("Enter the three number for which you want average.\n");
    printf("enter the 1st number:");
    scanf("%d",&n1);
    printf("enter the 2nd number:");
    scanf("%d",&n2);
    printf("enter the 3rd number:");
    scanf("%d",&n3);

    //Average
    float avg=(n1+n2+n3)/3;
    printf("Average:%.2f\n",avg);
    return 0;

}