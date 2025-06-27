// Program 16: Age-Based Driving Eligibility

#include<stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    if(age>60){
        printf("You can drive and you are a senior citizen.");
    }
    else if(age>40){
        printf("You can drive and you are older.");
    }
    else if(age>18){
        printf("you can drive.");
    }
    else{
        printf("You cannot drive my child.");
    }
    return 0;
}