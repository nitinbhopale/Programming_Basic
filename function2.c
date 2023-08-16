// Header file for printf and scanf function
#include<stdio.h>
// entry point function from where execution starts
int main()
{
    int value1 = 10;
    int value2 = 11;
    int Ans = 0;

    Ans = value1+value2;

    printf("%d",Ans);
    return 0; // return 0 to OS which indicates success
}