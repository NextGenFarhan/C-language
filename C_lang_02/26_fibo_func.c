#include<stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    fibo(n);
return 0;
}
void fibo(int n)
{
    int a=0,b=1,next_term;
    printf("%d",a);
    printf("%d",b);
    for(int i=1;i<=n;i++)
    {
        next_term=a+b;
        a=b;
        b=next_term;;
        printf("%d",next_term);
    }
}
