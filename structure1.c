#include<stdio.h>

 
struct Demo
{
    int no;
    float f;
    int x;
    float d;
    
};


int main()
{
    struct Demo obj1; // structure object 
    struct Demo obj2;

   obj1.no = 11;
   obj1.f = 10.5f;
   obj1.x = 21;
   obj1.d = 20.50f;

   obj2.no = 51;
   obj2.f = 50.5;
   obj2.x = 101;
   obj2.d = 60.5;
    
    printf("size of structure is %d\n",sizeof(obj1));
    printf("%d",obj1.x);
    return 0;
}

