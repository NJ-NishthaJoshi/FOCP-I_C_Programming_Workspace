/*
Q3. Simple Bill Calculation 
Implement a C program to calculate the total cost of an item. 
The program should:
• Accept the price of one item.
• Accept the quantity purchased. 
• Calculate and display the total bill. 
Formula: Total Bill = Price × Quantity */

#include <stdio.h>
int main()
{
    //variable intalization
    float p_1;
    float q_1;

    //accept input from user
    printf("enter the price of the item:");
    scanf("%f",&p_1);
    printf("enter the quantity you have purchased:");
    scanf("%f",&q_1);
    // formula
    float tb=(p_1*q_1);
    //display the total bill
    printf("Total Bill:%.2f\n",tb);
    return 0;
}
