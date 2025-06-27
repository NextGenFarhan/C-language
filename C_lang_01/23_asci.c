// Program 23: Lowercase Character Checker

//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    printf("The character is : %c\n",ch);
    printf("The ASCII value of character is : %d\n", ch);
    
    // ASCII value for lowercase: 97–122
    if(ch>=97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
        printf("This character not lowercase\n");
    }
    return 0;
}