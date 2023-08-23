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
    return 0;
}