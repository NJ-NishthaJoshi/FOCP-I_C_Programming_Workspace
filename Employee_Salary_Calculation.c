/*Q8. Employee Salary Calculation 
An employee's monthly salary consists of:
 • Basic Salary 
 • Allowance 
 • Bonus 
 Implement a C program to accept these values and calculate the final salary. 
 Formula: Final Salary = Basic Salary + Allowance + Bonus 
 Display the final salary up to two decimal places. */

#include <stdio.h>
int main()
{
    //variable initailization
    float basic_s;
    float allo;
    float bonus;
    float fs;

    //accept input from user
    printf("Please enter your Basic Salary,Allowance,Bonus to calculate your final salary\n");
    printf("Enter the Basic Salary:");
    scanf("%f",&basic_s);
    printf("Enter the Allowance:");
    scanf("%f",&allo);
    printf("Enter the Bonus:");
    scanf("%f",&bonus);

    //calculate Final Salary 
    fs = basic_s + allo + bonus ;

    //display the Final Salary 
    printf("\nFinal Salary = %.2f",fs);
    return 0;

}