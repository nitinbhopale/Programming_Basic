#include<stdio.h>

int main()
{
    int X = 11;
    const int Y = 11;
    printf("%d\n%d",X,Y);

    X++; //Allowed
    
    X--; //Allowed
   
    X=21;//Allowed

    
    // Y++; //Not Allowed
    // Y--; //Not Allowed
    // Y = 21; //Not Allowed
    
    return 0;
}