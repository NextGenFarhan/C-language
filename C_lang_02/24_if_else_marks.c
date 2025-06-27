// if programm
#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d",&marks);

    if(marks>90&&marks<=100){
    printf("A++.\n");}
    
    else if(marks>80&&marks<=90){
    printf("A+.\n"); }
    
    else if(marks>65&&marks<=80){
    printf("A.\n");}
    
    else if(marks>45&&marks<=65){
    printf("B.\n");}

    else if(marks>34&&marks<=45){
    printf("C.\n");}

    else
    printf("You are Fail.\n");
    return 0;
}