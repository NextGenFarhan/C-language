// Program 22: Income Tax Calculator for government employe..

//2.5-5.0 == 5%
//5.0-10.0 == 10%
//above == 30% 
#include<stdio.h>
int main(){
    int income;
    float tax = 0;
    printf("Enter income : ");
    scanf("%d", &income);

    if(income<=250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax =0.05*(income-250000);
    }
    else if(income>500000 && income<-1000000){
        tax =0.05*(500000-250000)+0.2*(income-500000);
    }
    else{
        tax=0.05*(500000-250000)+0.2*(1000000-500000)+0.3*(income-1000000);
    }
    printf("The Total Tax You Need To Pay Is %.2f", tax);                                           //.2f==decimal me do hi number aayega..
    return 0;
}