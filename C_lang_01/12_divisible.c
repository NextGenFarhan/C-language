// Program 12: Check Divisibility by 97

#include<stdio.h>
int main() {
    int number;                                                    
    printf("Enter a number: ");                              // Ask the user for a number
    scanf("%d", &number);                                                                 
    if (number % 97 == 0)                                    // Check divisibility by 97
    { printf("%d is divisible by 97.\n", number);} 
      else 
    {printf("%d is not divisible by 97.\n", number);}
     return 0;
}             /***[CHAT GPT]***/

