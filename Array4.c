#include<stdio.h>

int main()
{
    int Arr[4] = {11,21,51,101};

    printf("Base Address of Array: %d\n",Arr);
    printf("Base address o first element of array : %d\n",&(Arr[0]));

    printf("Address of Second Element is : %d\n",&Arr[1]);
    printf("First Element is: %d\n",Arr[0]);
    printf("Size of whole array: %d\n",sizeof(Arr));
    printf("Size of Second Element of Array: %d\n",sizeof(Arr[1]));
    return 0;
}