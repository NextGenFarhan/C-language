/* NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/
                 /*PROGRAM NO 1-B*/
        /*PROGRAM TO DEMONSTRATE OPERATORS.*/
#include<stdio.h>
int main(){
int a,b,c,d;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Enter c: ");
scanf("%d",&c);
printf("Enter d: ");
scanf("%d",&d);

                /*ARITMATIC OPERATORS*/
printf("%d\n",a+b);
printf("%d\n",a-b);
printf("%d\n",a*b);
printf("%d\n",a/b);
printf("%d\n",a%b);

                /*RELATIONAL OPERATORS*/
printf("%d\n",a==b);
printf("%d\n",a<b);
printf("%d\n",a>b);
printf("%d\n",a!=b);

                /*LOGICAL AND*/
printf("%d\n", (a>b)&&(c>d));
printf("%d\n", (a<b)&&(c<d));
printf("%d\n", (a>b)&&(c<d));
printf("%d\n", (a<b)&&(c>d));

                /*LOGICAL OR*/
printf("%d\n", (a>b)||(c>d));
printf("%d\n", (a<b)||(c<d));
printf("%d\n", (a>b)||(c<d));
printf("%d\n", (a<b)||(c>d));

                /*TERNARY*/
int age;
printf("Enter age:  ");
scanf("%d",&age);
age>=18?printf("Eligible to vote\n"):printf("Not Eligible to vote\n");

                /* UNARY OPERATORS*/
            /*INCREMENT OPERATORS*/

        /*Post increment*/
int p=10;
printf("\nPost increment\n");
{printf("%d\n",p++);
 printf("%d\n",p);  }

        // Pre increment
int q=10;
printf("\nPre increment\n");
{printf("%d\n",++q);
 printf("%d\n",q); }

                /*DECREMENT OPERATORS*/
/*Post decrement*/
int u=10;
printf("\nPost decrement\n");
{printf("%d\n",u--);
printf("%d\n",u); 
}
/*Pre decrement*/
int v=10;
printf("\nPre decrement\n");
{printf("%d\n",--v);
 printf("%d\n",v);}
    
                /*Commas*/
    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);
    {  printf("Value of a is: %d \n", a);
       printf("Value of b is: %d \n", b); }

return(0);
}