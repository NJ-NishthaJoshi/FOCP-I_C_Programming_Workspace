/*
5. Simple Calculator using switch 
Take two numbers and an operator (+, -, *, /, %) and perform the corresponding operation using switch. 
For division: • If the second number is 0, print Cannot divide by zero. 
 Example: Input: 15 4 % Output: 3 */
 
 #include <stdio.h>
int main(void){

    //variable intailzation
    int x,y;
    char op;

    //Accept input from user
    printf("enter 1st no:");
    scanf("%d",&x);
    printf("enter 2nd one: ");
    scanf("%d",&y);
    printf("enter operator [+,-,*,/,%%]:");
    scanf(" %c",&op);

    switch(op){
        case '+':
           printf("Result=%d\n",x+y);
        break;
        case '-':
           printf("Result=%d\n",x-y);
        break;
        case '*':
           printf("Result=%d\n",x*y);
        break;
        case '/':
            if(y!=0){
               printf("Result=%d\n",x/y);
            }
            else{
                printf("error: Division by zero\n");
            }
        break;
        case '%':
            if(y!=0){
                printf("Result=%d\n",x % y); // <-- Fixed x%y
            }
            else{
                printf("error: Division by zero\n");
            }
        break;
        default:
            printf("error: Invalid operator\n");
        break;
    }
    return 0;
}
