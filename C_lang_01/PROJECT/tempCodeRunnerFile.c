//GRAVITATION FORCE BETWEEN TWO OBJECT
//(Gm1m2)d*d.

#include<stdio.h>
#include<math.h>
int main (){
long double F,G,m1,m2,d;
printf("Enter m1:");
scanf("%Lf",&m1);
printf("Enter m2:");
scanf("%Lf",&m2);
printf("Enter d:");
scanf("%Lf",&d);
F=G*m1*m2/pow(d,2);
G=6.67*pow(10,-11);
printf("Force is : %Lf", F);
return 0;
}