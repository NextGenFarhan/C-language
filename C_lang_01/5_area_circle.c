// Program 5: Area of a Circle

#include <stdio.h>
int main() {
    float radius;
    float pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = pi * radius * radius;
    printf("Area is: %.2f\n", area);

    return 0;
}
