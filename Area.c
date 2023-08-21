#include<stdio.h>

int main()
{
    const float PI = 3.14f;
    float radius = 0.0f;
    float Area = 0.0f;
    printf("Enter the size of radius : \n");
    scanf("%f",&radius);

    Area = PI * radius * radius;
    printf("Area of Circle is : %f\n",Area);
   
    return 0;
}