/*
 NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/

                            /*Program NO 4-B*/
                /*Program to demonstrate function passing arguments */
#include<stdio.h>
void callbyvalue(intn);
void callbyreference(int*n);
int main()
{
int n;
printf("Enter n\n");
scanf("%d",&n);
printf("The value of n before calling the function(by value):%d\n",n);
callbyvalue(n);
printf("The value of n after calling the function(by value):%d\n",n);
printf("The value of n before calling the function(by reference):%d\n",n);
callbyreference(&n);
printf("The value of n after calling the function(by reference):%d\n",n);
return 0;
}
                                //Call by value.
void callbyvalue(int n)
{
    n=n+2;
    printf("The value of n in function(by value)%d\n",n); 
}
                                //Call by reference.
void callbyreference(int *n)
{
    (*n)++;
    printf("The value of n in function(byreference)%d\n",*n);
}