// Program 18: Switch Case Statement

#include<stdio.h>

int main(){
    int a;
    printf("enter a:");
    scanf("%d",&a);
    switch(a){
        case 1:
             printf("You entered 1.");
        case 2:
             printf("You entered 2.");
             break;                                   //aage ka nahi aane ke liye break use kiye.
        case 3:
             printf("You entered 3.");
             break;
        case 4:
             printf("You entered 4.");
             break;
        default:
            printf("NOTHING MATCHED");
    }
    return 0;
}