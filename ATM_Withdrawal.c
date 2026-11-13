/*
7. ATM Withdrawal
 An ATM allows withdrawal only when: 
 • PIN is correct (1234)  
 • Amount is a multiple of 100 
 • Amount is less than or equal to balance 
 • Amount is greater than 0  
   
   Given pin, amount, and balance, 
   print: • 
   Invalid PIN  
   • Invalid Amount 
   • Insufficient Balance  
   • Withdrawal Successful  
   Implement the program using nested if.
    
*/
#include <stdio.h>
int main()
{
    //variable initaliztion
    int pin;
    int amount;
    int balance;

    //accept input from user
    printf("\nATM\n");
    printf("enter the PIN:");
    scanf("%d",&pin);
    printf("enter the amount:");
    scanf("%d",&amount);
    printf("enter the balance:");
    scanf("%d",&balance);

    //condition
    if(pin==1234)
    {
        if(amount>0)
        {
            if(amount%100==0)
            {
                if (amount<=balance){
                    printf("Withdrawal Successful");
                }
                else{
                    printf("Insufficient Balance");
                }

            }
            else{
                printf("Amount should be multiple of 100");
            }
        }
        else{
            printf("Amount cannot be zero");
        }
    }
    else{
        printf("PIN is incorrect");
    }
    return 0;
}
