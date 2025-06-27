// Program 14: If-Else with Age Check

#include<stdio.h>
int main(){
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    if(age>10){
        printf("we are inside :");
        printf("your age is greater than 10.\n");
    }
    else{                                                                    //else bar is not necessary but optionsl.
        printf("your age is not greater than 10.\n");
    }
    if(age%5==0){ 
        printf("we are inside :");                                            /*"age%5" is remainder when age is greater than 5.*/
        printf("your age is divisible by 5.\n");
    }
    else{
        printf("your age is not divisible by 5.\n");
    }
    return 0;
}    