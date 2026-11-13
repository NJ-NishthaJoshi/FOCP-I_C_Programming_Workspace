/*3. Electricity Bill Slab 
Implement a program to calculate the electricity bill based on units consumed:
 Units                 Rate
0–100                ₹2/unit
101–200              ₹3/unit
Above 200            ₹5/unit 

  Use if-else ladder. 
  Example: Input: 250 Output: 850 
*/

 #include <stdio.h>
 int main()
 {
    //variable initalization
    int unit;
    int eb;

    //accept input from user
    printf("\nElectricity Bill Slab\n");
    printf("\nEnter the number of units you have consumed:");
    scanf("%d",&unit);

    //condition
    if((unit >=0) && (unit<=100))
    {
        eb=unit*2;
    }

    else if ((unit>=101) && (unit<=200))
    {
        eb=(100*2)+(unit-100)*3;
    }

    else if (unit>200)
    {
        eb=(100*2+100*3)+(unit-200)*5;
    }

    //display the output
    printf("Your Electricity  Bill:%d",eb);

    return 0;

 }