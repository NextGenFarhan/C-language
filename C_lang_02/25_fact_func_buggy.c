// DO BAAR INPUT MAANG RAHA HAI..
//Factorial(fact) using fuctions.
#include<stdio.h>
void fact(int n);     
int main()
{
int n;
printf("Enter n : ");
scanf("%d\n",&n);
fact(n);
return 0;
}
void fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {fact=fact*i;}
    printf("Factorial of %d is %d",n,fact);
}    