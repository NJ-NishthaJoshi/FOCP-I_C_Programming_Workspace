/*Q10. Industry-Style Invoice Calculator
 A company wants to generate a simple invoice for a customer.
  Implement a C program to accept:
   • Product ID 
   • Product Price 
   • Quantity 
   • Discount Percentage
    Calculate the following: 
    Subtotal = Price × Quantity
     Discount Amount = Subtotal × Discount Percentage / 100
      Final Amount = Subtotal − Discount Amount 
      Display the following details in a properly formatted manner: 
      Product ID
      Subtotal 
      Discount Amount 
      Final Payable Amount */

#include <stdio.h>
int main()
{
    //variable intaialization
    char p_id[26];
    float p_p;
    int q;
    float d_p;
    float s_t;
    float d_a;
    float f_a;

    //accept input from user
    printf("\nIndustry-Style Invoice Calculator\n\n");
    printf("enter the Product ID:" );
    scanf("%s",&p_id);
    printf("enter the Product Price:" );
    scanf("%f",&p_p);
    printf("enter the Quantity:" );
    scanf("%d",&q);
    printf("enter the Discount Percentage:" );
    scanf("%f",&d_p);

    //Subtotal,Discount Amount,Final Amount
    s_t=(p_p *q);
    d_a=(s_t *d_p) / 100;
    f_a=(s_t-d_a);

    //Display the following details
    printf("\nDisplay the following details:\n");
    printf("Product ID:%s\n",p_id);
    printf("Subtotal:%.2f\n",s_t);
    printf("Discount Amount:%.2f\n",d_a);
    printf("Final Payable Amount:%.2f\n",f_a);
    return 0;

}