#include<stdio.h>
int main()
{
    char cArr[4] = {'a','b','c','d'};

    int iArr[4] = {11,21,31,41};

    float fArr[4] = {1.5f,2.5f,3.5f,4.5f};

    double dArr[4] = {11.0,21.0,101.0,301.0};

    for(int i=0;i<4;i++)
    {
        printf("%c\n",cArr[i]);
        printf("%d\n",iArr[i]);
        printf("%f\n",fArr[i]);
        printf("%f\n",dArr[i]);
    }
    return 0;
}