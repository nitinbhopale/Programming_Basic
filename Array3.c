#include<stdio.h>

int main()
{
    // 1
    int Arr[5] = {10,20,30,40,50}; // member initialisation list 

    //2
    int Brr[] = {10,20,30,40,50};  

    //3
    int Crr[7] = {10,20,30};

    //4 
    int Drr[5];
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;
    Crr[4] = 50;

    int nArr[4] = {10,20,30,40};
    const int mArr[4] = {1,2,3,4};
   
    return 0;
}