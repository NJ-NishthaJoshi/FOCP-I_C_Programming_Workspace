/*Q9. Temperature Conversion
 Implement a C program to accept the temperature in Celsius and convert it into Fahrenheit. 
 Formula: Fahrenheit = (Celsius × 9 / 5) + 32 
 Ensure that the output is displayed as a decimal value. 
 Example: 
 Input: 25 
 Output: 77.00 °F */

#include <stdio.h>
int main()
{
    //variable initalization
    float c;
    float f;

    //accept input from user
    printf("Enter The temperature in Celsius:");
    scanf("%f",&c);

    //Fahrenheit
    f=((c*9)/5)+32;
    
    //diaplay the output
    printf("Temperature in Fahrenheit:%.2f °F",f);
    return 0;

}

