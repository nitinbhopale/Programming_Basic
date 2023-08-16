#include<stdio.h>

int Addition(int No1, int No2)
{
    int Res = 0;
    Res = No1+No2;
    return Res;
}

int Substraction(int No1, int No2)
{
    int Res = 0;
    Res = No1-No2;
    return Res;
}

int Multiplication(int No1, int No2)
{
    int Res = 0;
    Res = No1*No2;
    return Res;
    
}

int Division(int No1, int No2)
{
    int Res = 0;
    Res = No1/No2;
    return Res;
}

int main()
{
    int Value1 = 20;
    int Value2 = 10;
    int Ans = 0;

    Ans = Addition(Value1,Value2);
    printf("Addition is :%d\n",Ans);

    Ans = Substraction(Value1,Value2);
    printf("Substraction is :%d\n",Ans);

    Ans = Multiplication(Value1,Value2);
    printf("Multiplication is :%d\n",Ans);

    Ans = Division(Value1,Value2);
    printf("Division is :%d\n",Ans);
    return 0;
}