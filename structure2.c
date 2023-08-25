#include<stdio.h>

struct  Demo
{
    int no;
    int arr[3];
    float f;
};

int main()
{
    struct Demo obj;

    obj.no = 10;

    obj.arr[0] = 20;
    obj.arr[1] = 40;
    obj.arr[2] = 60;

    obj.f = 90.90;
    
    return 0;
}