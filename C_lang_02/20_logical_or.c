// Logical OR (||).
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("Enter d:");
    scanf("%d",&d);
    printf("(a > b) || (c > d): %d\n", (a > b) || (c > d));
    printf("(a < b) || (c < d): %d\n", (a < b) || (c < d));
    printf("(a > b) || (c < d): %d\n", (a > b) || (c < d));
    printf("(a < b) || (c > d): %d\n", (a < b) || (c > d));
    return 0;
}
