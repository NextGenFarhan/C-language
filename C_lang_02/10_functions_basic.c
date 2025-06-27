/*
 NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/
                            /*PROGRAM NO 4-A*/
                    /*Program to demonstrate (void functionname, parameter, two parameter)*/
#include <stdio.h>
            //void Function()
void myself();
void hobbies();
            //table Using function
int table(int n);
            //Sum Of Two Number Using Function.
int sum(int a,int b);
int main() {
            //void Function()
printf("MySelf: \n");
myself();
printf("My Hobbies: \n");
hobbies();
            //table Using function
int n;
printf("Enter Your Number \n");
scanf("%d", &n);
table(n);

            //Sum Of Two Number Using Function.
int a,b;
printf("Enter a\n");
scanf("%d",&a);
printf("Enter b\n");
scanf("%d",&b);
sum(a,b);
printf("%d",sum(a,b));
return 0;
}
                    //void Function()
void myself()
{
printf("My Name is Farhan.\n");
printf("I live in Mumbai.\n");
}
void hobbies()
{
printf("Trekking.\n");
printf("To Explore New Things.\n");
}
                    //table Using function
int table(int n) 
{for (int i = 1; i <= 10; i++) 
{printf("%d\n", i * n);} 
}
                    //Sum Of Two Number Using Function.
int sum(int a,int b)
{ return (a+b); }