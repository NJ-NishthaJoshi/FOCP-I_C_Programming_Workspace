/*
8. Day Number →
Working Day / Weekends 
Take a number from 1 to 7 and use switch: 
1 → Monday 2 → Tuesday ... 7 → Sunday Along with the day name, 
print:
• Working Day for Monday–Friday  
• Weekend for Saturday–Sunday  
For any other number, print Invalid Day.*/ 

#include <stdio.h>

int main() {
    //variable initalization
    int x;

    //accept input from user
    printf("Enter day number (1-7): ");
    scanf("%d", &x);

    //condition
    switch (x)
    {
        case 1:
        printf("---->It is Monday and Weekday.");
        break;
        case 2:
        printf("---->It is Tuesday and Weekday.");
        break;
        case 3:
        printf("---->It is Wednesday and Weekday.");
        break;
        case 4:
        printf("---->It is Thursday and Weekday.");
        break;
        case 5:
        printf("---->It is Friday and Weekday.");
        break;
        case 6:
        printf("---->It is Saturday and Weekend.");
        break;
        case 7:
        printf("---->It is Sunday and Weekend.");
        break;


        default:
        printf("Invalid day\n");

    }

    return 0;
}