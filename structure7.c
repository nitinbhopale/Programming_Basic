#include<stdio.h>
 struct Hello
    {
        int no;
        float d;
    };

struct Demo
{
    int i;
    float f;
    struct Hello hobj;
};

int main()
{
    struct Demo dobj;
    
    
    printf("Size of Object is => %d\n",sizeof(dobj));
    return 0;
}