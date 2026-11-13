/*
 Q-2. Accept and Display User Details 
 Implement a C program to accept the following details from the user using scanf():
  • Age 
  • Height (in meters) 
  • Grade (single character) 
  Display all the entered values clearly using printf(). */


#include <stdio.h>
int main(){
    //variable initalization
    int age;
    float height;
    char grade;

    //asking user for input
    printf("hello user!!\nPlease enter the following details\n");
    printf("enter the age:");
    scanf("%d",&age);
    printf("enter the height(in meters):");
    scanf("%f",&height);
    printf("enter the grade:");
    scanf(" %c",&grade);

    //display the information
    printf("Display the user information\n");
    printf("\n• Age:%d\n",age);
    printf("• Height (in meters):%.2f\n",height);
    printf("• Grade (single character):%c\n ",grade);
    return 0;
   
}
