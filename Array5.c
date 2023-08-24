#include<stdio.h>

int main()
{
    int arr[2][5] = {
        {10,20,30,40,50},
        {1,2,3,4,5}
    };

    for(int i = 0;i<2;i++)
    {
        for(int j = 0 ;j<5;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int Brr[3][3] = {1,2,3,4,5,6,7,8,9};

    Brr[0][0] = 11;
    Brr[0][1] = 21;
    Brr[0][2] = 31;

    Brr[1][0] = 10;
    Brr[1][1] = 20;
    Brr[1][2] = 30;

    Brr[2][0] = 40;
    Brr[2][1] = 50;
    Brr[2][2] = 60;

    return 0;
}