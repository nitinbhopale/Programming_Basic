#include<stdio.h>

int chkNo(int No)
{
    int flag = No%2;
    return flag;
}
int main()
{
    int No = 0;
    printf("Enter the number\n");
    scanf("%d",&No);
    if(chkNo(No))
    {
        printf("It is Odd Number");
    } else {
        printf("It is Even Number");
    }
    return 0;

}

// #include<stdio.h>
// int main()
// {
//  int No = 0;
//  int Ans = 0;
//  printf("Enter the Number\n");
//  scanf("%d\n",&No);
//  Ans = No%2
//  if(No == 0)
//  {
//   printf("Number is Even\n");
//  }
//   else 
//   {
//    printf("Number is Odd\n");
//    }
// return 0;
// }