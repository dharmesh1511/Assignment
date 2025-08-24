#include<stdio.h>
void main()
{
    int test=45;
    printf("%d",test);
    printf("%p",&test);

    int num=15;
    int *ptr=&num;
    //printf("%d\n",num);
     printf("%p\n",&num);
    // printf("%p\n",num);
    // printf("%d\n",*ptr);

    // int num[5]={23,3,4,5,9};
    // int i;
    // for(i=0;i<5;i++)
    // {
    //     printf("%d\n",num[i]);
    // }
    // for(i=0;i<5;i++)
    // {
    //     printf("%p\n",num[i]);
    // }
}