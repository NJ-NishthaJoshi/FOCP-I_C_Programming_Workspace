/*
4. Triangle Validator 
 Given three angles a, b, and c,
  implement a program to determine:
   • Invalid if their sum is not 180 or any angle is 0 or negative. 
    • Acute if all three angles are less than 90.  
    • Right if exactly one angle is 90.  
    • Obtuse otherwise.  
    
*/
#include <stdio.h>
int main()
{
    //variable initalization
    int a;
    int b;
    int c;
    int sum;

    //accept input from user
    printf("enter the first angle:");
    scanf("%d",&a);
    printf("enter the second angle:");
    scanf("%d",&b);
    printf("enter the third angle:");
    scanf("%d",&c);
    
    //sum
    sum=a+b+c;

    //condition
    
    if((sum!=180)||((a==0)||(b==0)||(c==0))||((a<0)||(b<0)||(c<0)))
       {
        printf("Invaild ,if their sum is not 180 or any angle is 0 or negative.");
    }
    
    else if((a<90) && (b<90) && (c<90))
    {
        printf("Acute");
    }
    else if((a==90)||(b==90)||(c==90))
    {
        printf("Right Angle");
    }

    else{
        printf("Obtuse");
    }

    return 0;
}
