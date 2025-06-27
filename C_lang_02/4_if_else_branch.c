/*
 NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/
                        /*PROGRAM NO 2-A*/
            /*Program to Demonstrate Branching */
#include <stdio.h>
int main(){
int age,marks;

            /*if(without else)*/
printf("Enter Your age :");
scanf("%d",&age);
if (age>=0) 
    {printf("Your age is : %d\n",age);}
                
            /*if else (age)*/
if(age>=18)
    {printf("Eligible to Vote. \n");
    printf("Eligible to Drive. \n");}
else
    {printf("Not Eligible to Drive. \n");
    printf("Not Eligible to Vote. \n");}
                
                /*Multiway*/
printf("Enter Marks  : ");
scanf("%d", &marks);
if(marks>=90)
    {printf("A+\n");}
    else if(marks>80 && marks<=90)
      {printf("A\n");}
    else if(marks<=70 && marks<80)
      {printf("B\n");}
else
    {printf("You have Entered Invalid Marks\n");}
return 0;
}
