/*Q7. Calculate Total Marks and Percentage 
Implement a C program to accept marks obtained in five subjects, where each subject is out of 100.
 Calculate and display:
  • Total Marks 
  • Percentage 
  Ensure that the percentage is displayed correctly as a decimal value.*/ 
  
#include <stdio.h>
int main()
{
    //variable initalization
    float s1;
    float s2;
    float s3;
    float s4;
    float s5;
    float tm;
    float p;
    
    //accept input from user
    printf("Enter the marks obtained in five subjects.\n");
    printf("enter the 1st subject:"); 
    scanf("%f",&s1);
    printf("enter the 2nd subject:");
    scanf("%f",&s2); 
    printf("enter the 3rd subject:");
    scanf("%f",&s3); 
    printf("enter the 4th subject:");
    scanf("%f",&s4);
    printf("enter the 5th subject:"); 
    scanf("%f",&s5); 
    
    //The Total marks and percentage
    tm=s1+s2+s3+s4+s5;
    p=tm/5;

    //Display the output
    printf("\nCalculate and display-\n");
    printf("Total Marks:%.2f\n",tm);
    printf("Percentage:%.2f\n",p );
    return 0;


}