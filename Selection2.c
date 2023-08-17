#include<stdio.h>

int main()
{
    int Std = 0;
    printf("Primary School Portal, Advihir\n");

    printf("Enter Your Division: \n");
    scanf("%d",&Std);

    if(Std==1)
    {
        printf("Your Exam is at 1PM\n");
    } 
    else if(Std==2)
    {
        printf("Your Exam is at 2PM\n");
    } 
    else if(Std==3)
    {
        printf("Your Exam is at 3PM\n");
    } 
    else if(Std==4)
    {
        printf("Your Exam is at 4PM\n");
    }
    else {
        printf("Invalid Standard.....\n");
    }
    return 0;
}