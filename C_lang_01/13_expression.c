// Program 13: Expression Evaluation Step-by-Step
/*explain step by step evaluation of 3*x/y-z+k, x=2,y=3,z=3,k=1.*/

#include<stdio.h>
int main(){
    int x=2,y=3,z=3,k=1;
    float e = 3*x/y-z+k;
    //  3*x/y-z+k;
    //  6/y-z+k;
    //  2-z+k;
    //  -1+k;
    //  0;
    printf("the value of e is %f", e);
    return 0;
}