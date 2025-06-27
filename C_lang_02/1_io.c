/* NAME:Khan Farhan Ahmed Ishtiyaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
 */
                      /* PROGRAM NO 1-A */
/*program to demonstrate Input/Output function.*/
#include <stdio.h>
int main(){
int roll_no;
                                                        //Enter Your String.
char str[100000];
printf("Enter any Number from 1 to 99999 : ");
gets(str);
                                                        //Enter Your Character.
char ch;
printf("enter your character : ");
ch=getchar();

                                                        //Enter Your Roll no.
printf("Enter your roll number : ");
scanf("%d" , & roll_no);

printf("Your String is:\n");
puts(str);
printf("you have entered:\n");
putchar (ch);
printf("\nYour Roll no. is %d\n", roll_no);

return(0);
}