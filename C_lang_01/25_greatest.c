// Program 25: Greatest of Four Numbers

#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    printf("Enter d: ");
    scanf("%d", &d);

    if (a >= b && a >= c && a >= d) {
        printf("The greatest of all is %d\n", a);
    } else if (b >= a && b >= c && b >= d) {
        printf("The greatest of all is %d\n", b);
    } else if (c >= a && c >= b && c >= d) {
        printf("The greatest of all is %d\n", c);
    } else {
        printf("The greatest of all is %d\n", d);
    }

    return 0;
}



// shorter method 
// int max = a;

// if (b > max) max = b;
// if (c > max) max = c;
// if (d > max) max = d;

// printf("The greatest of all is %d\n", max);
