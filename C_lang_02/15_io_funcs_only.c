//Input and output functions
#include<stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
ch=getchar();
printf("You have entered ");
putchar(ch);

char str[100];
printf("Enter string: ");
getchar();
gets(str);
puts(str);

int roll_no;
printf("Enter roll_no:");
scanf("%d",&roll_no);
printf("your roll_no is %d", roll_no);
return 0;
}
