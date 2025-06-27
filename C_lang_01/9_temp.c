// Program 9: Celsius to Fahrenheit Converter

// f=(9/5)C+32
#include<stdio.h>
int main(){
    float c, f;
    printf("enter c: ");
    scanf("%f",&c);
    f=(9.0/5.0)*c+32;
    printf("THE VALUE IS FAHRENHEIT IS %f", f);
    return 0;
}