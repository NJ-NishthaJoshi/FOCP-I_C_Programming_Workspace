/* C Programming Assignment 
1 Q1. Display Student Information
 Implement a C program to store and display the following information using appropriate primitive data types:
 • Student ID 
 • Age 
 • Percentage 
 • Grade 
 Display all the information clearly using printf(). */

 # include <stdio.h>
 int main(){
    //variable initalization 
    char sid[20]="A132049200";
    int age=18;
    float percentgae=90.67;
    char Grade='A';

    //display the information
    printf(" Display Student Information:\n");
    printf("\n<----------------------->\n");
    printf("|• Student ID:%2s|\n",sid);
    printf("|• Age       :%-10d|\n",age);
    printf("|• Percentage:%-5f%%|\n",percentgae);
    printf("|• Grade     :%-10c|\n",Grade);
    printf("<----------------------->");

    return 0;

 }
