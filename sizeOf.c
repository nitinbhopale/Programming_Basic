#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 21;
    float f = 12.31f;
    double d = 89.236589;

    printf("Size of Character: %d bytes\n",sizeof(ch));
    printf("Size of integer: %d bytes\n",sizeof(i));
    printf("Size of float: %d bytes\n",sizeof(f));
    printf("Size of double: %d bytes\n",sizeof(d));

    return 0;
}