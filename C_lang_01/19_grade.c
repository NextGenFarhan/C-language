// Program 19: Student Grade Evaluator

#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90){
        printf("Your result is A.");
    }
    else if(marks<=90 && marks>=80){
        printf("Your result is B.");
    }
    else if(marks<=80 && marks>=70){
        printf("Your result is C.");
    }
    else if(marks<=70 && marks>=60){
        printf("Your result is D.");
    }
    else if(marks<=60 && marks>=50){
        printf("Your result is E.");
    }
    else{
        printf("You are fail.");
    }
    return 0;
}