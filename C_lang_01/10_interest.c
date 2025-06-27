// Program 10: Simple Interest Calculator

/*simple interst = (prt)/100*/
#include<stdio.h>
int main(){
    float p, r, t;
    printf("enter p");
    scanf("%f",&p);
    printf("enter r");
    scanf("%f",&r);
    printf("enter t");
    scanf("%f",&t);
    printf("the value of simple interest is %f", (p*r*t)/100);
    return 0; 
}