/*
 NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/
/* PROGRAM NO: 7-A */
/*program to demonstrate 1 dimensional array*/
#include<stdio.h>
int main()
{
int x[10],n,sum=0;
float avg;
printf("Enter n : ");
scanf("%d",&n);
if (n>10)
{
printf("Error: Maximum size is 10.\n");
return 1;
}
for(int i=0;i<n;i++)
{
printf("Enter element x%d: ",i);
scanf("%d",&x[i]);
sum=sum+x[i];
}
printf("Sum of elements=%d",sum);
avg=(float)sum/n;
printf("\n");
printf("Average of the elements = %.2f\n",avg);
return 0;
}