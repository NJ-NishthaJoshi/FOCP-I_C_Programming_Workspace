/*9. Scholarship Eligibility
 A student is eligible for a scholarship if:
  • Marks are at least 75  
  • Attendance is at least 75%  
  However: 
  • If marks are 90 or above and attendance is at least 70%,
   print Special Scholarship.  
   • Otherwise, if both normal conditions are satisfied, print Eligible.
     • Else print Not Eligible.  
     Example: 
     Input: Marks = 92 Attendance = 72
      Output: Special Scholarship 
*/
#include <stdio.h>
int main()
{
    //variable intialization
    float marks;
    int attendance;

    // accept the input from user
    printf("\nScholarship Eligibility\n");
    printf("enter the marks:");
    scanf("%f",&marks);
    printf("enter the attendance:");
    scanf("%d",&attendance);

    //condition
    if (marks>=90 && attendance>=70)
    {
        printf("Eligible for Special Scholarship!!!");
    }

    else if (marks>=75  &&  attendance>=75)
    {
        printf("Eligible for Scholarship!!!!!!");
    }

    else
    {
        printf("Not Eligible for both the Scholarship!!!");
    }

    return 0;
}