#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter the number of celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*(9/5))+32;
    printf("celsius to fahrenheit=%f",fahrenheit);
    return 0;
}