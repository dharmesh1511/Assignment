#include<stdio.h>
#define pi 3.14
int main()
{
    float c,r;
    printf("Enter the value of circle:");
    scanf("%f",&r);
    c=pi*r*r;
    printf("The area of circle is:%f\n",c);
    return 0;
}