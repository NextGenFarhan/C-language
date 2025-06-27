/*
 NAME: Khan Farhan Ahmed Ishityaque Ahmed.
 Roll no: 241221.
 Branch:computer engineering  
 Batch: B-2.
*/
                    /*PROGRAM 3-A.*/
            /*program to demonstrate nested control structure */
#include <stdio.h>
int main()
{
    int number, day;

                // If-Else Loop Nested (Check if the number is positive and even/odd)
    scanf("%d",&number);

    if (number>=0) 
    {printf("Your number is positive.\n");
        if (number%2==0)
            printf("Your number is even.\n");
        else
            printf("Your number is odd.\n");
    } 
    else 
    {printf("Your number is negative.\n");}

                // Switch Case (Days of the week)
    printf("Enter day (1-7) for days of the week:");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid number! Please enter a number between 1 and 7.\n");
            break;
        }

                    // Nested For Loop (Pattern Printing)
    int n;
    printf("Enter the number (pattern):");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) 
    {  
        for (int j = 1; j <= i; j++) 
        {printf("%d", j);}
        printf("\n");
    }

    return 0;
}