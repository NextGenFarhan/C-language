// Program 7: Area of Rectangle

#include<stdio.h>
int main(){
    //int length = 5;
    //int breadth = 5;
    int length, breadth;
    printf("enter length: "),
    scanf("%d", &length),
    printf("enter breadth: "),
    scanf("%d", &breadth),

    printf("area of rectangle is %d", length*breadth);
    return 0;
}