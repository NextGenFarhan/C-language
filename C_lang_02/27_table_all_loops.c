#include<stdio.h>
int main()
{
int i,n,table;
printf("Enter the number whose table you want : ");
scanf("%d",&n);
// for loop.
// for(i=1;i<=10;i++)
// {
//     table=n*i;
//     printf("%d\n",table);
// }
//while loop.
// i = 1;
// while(i<=10)
// {
//     table=n*i;
//     printf("%d\n",table);
//     i++;
// }
//do while loop.
i=1;
do
{
     table=n*i;
     printf("%d\n",table);
     i++;
}
while(i<=10);
return 0;
}