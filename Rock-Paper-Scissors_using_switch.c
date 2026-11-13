/*10. Rock-Paper-Scissors using switch 
Two players enter:
 1 → Rock 
 2 → Paper 
 3 → Scissors 
 Implement a C program using switch and if-else to determine: 
 • Player 1 Wins  
 • Player 2 Wins  
 • Draw  
 • Invalid Input if either player enters anything other than 1, 2, or 3. 
  Example: Input: 1 3 Output: Player 1 Wins 

*/

#include <stdio.h>
int main()
{
    //variable intialization
    int p1;
    int p2;

    //accept input from user
    printf("\n Rock-Paper-Scissors \n");
    printf("Enter:\n1 → Rock\n2 → Paper\n3 → Scissors\n");
    printf("Player 1---->enter your number:");
    scanf("%d",&p1);
    printf("Player 2---->enter your number:");
    scanf("%d",&p2);

    //condition
    if (p1==1)
    {
        switch(p2)
        {
            case 1:
            printf("Draw");
            break;
            case 2:
            printf("Player 2 Wins");
            break;
            case 3:
            printf("Player 1 Wins");
            break;
            default: printf("Invalid Input");
        }
    }
    else if (p1==2)
    {
        switch(p2)
        {
            case 1:
            printf("Player 1 Wins");
            break;
            case 2:
            printf("Draw");
            break;
            case 3:
            printf("Player 2 Wins");
            break;
            default: printf("Invalid Input");
        }
    }
    else if (p1==3)
    {
        switch(p2)
        {
            case 1:
            printf("Player 2 Wins");
            break;
            case 2:
            printf("Player 1 Wins");
            break;
            case 3:
            printf("Draw");
            break;
            default: printf("Invalid Input");
        }
    }
    
    else 
    {
        printf("Invalid Input");
    }
    return 0;

}