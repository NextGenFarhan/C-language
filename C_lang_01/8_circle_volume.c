// Program 8: Circle Area & Cylinder Volume

// area of ciecle = pi*r*r,,,,, volume of cylinder is = pi*r*r*h...

#include<stdio.h>
int main(){
    float r,a,v,h;
    printf("enter r: ");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("area of circle is %f \n", a);
    printf("enter h: ");
    scanf("%f",&h);
    v=3.14*r*r*h;
    printf("volume of cylinder is %f \n", v);
    return 0;
}

/*if r=2 & h=4 */
//#include<stdio.h>
//int main(){
//    int r=2;
//    int h=4;
//    printf("area of circle with radius %d is %f, r, 3.14*r*r");
//    printf("the volume of cylinder is %d and height %d is %f", r, h, 3.14*r*r*h);
//    return 0;
//}