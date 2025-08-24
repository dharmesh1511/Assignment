#include<stdio.h>
int main()
{
    int age,sallery;
    // printf("Enter you age:");
    // scanf("%d",&age);
    //if
    // if(age>=18)
    // {
    //     printf("You are eligible for vote");
    // }

    //if else
    // if(age>=18)
    //  {
    //      printf("You are eligible for vote");
    //  }
    //  else
    //  {
    //     printf("You are not eligible for vote");
    //  }

    //Nested if
    // if (age>=18)
    // {
    //     printf("Enter your sallery:");
    //     scanf("%d",&sallery);
    //     if(sallery>=50000)
    //     {
    //         printf("Pay your income tex");
    //     }
    //     else
    //     {
    //         printf("You are not pay income tex");
    //     }
    // }
    // else
    // {
    //     printf("You are not 18 above");
    // }

    //if..else..if..else
    // int a=2;
    // if (a==0)
    // {
    //     printf("a==0");
    // }
    // else if(a==1)
    // {
    //     printf("a==1");

    // }
    // else if(a==2)
    // {
    //      printf("a==2");
    // }
    // else{
    //     printf("Not in 0 to 2");
    // }

    //switch
     int i;
    // char c;
    printf("Enter value:");
    scanf("%d",&i);

    // switch (i)
    // {
    // case 1:
    //     printf("i=1");
    //     break;
    // case 2:
    //     printf("i=2");
    //     break;
    // case 3:
    //     printf("i=3");
    //     break;
    // case 4:
    //     printf("i=4");
    //     break;
    // default:
    //     printf("error");
    //     break;
    //}

    switch (i%2)
    {
    case 0:
        printf("odd");
        break;
    case 1:
        printf("even");
        break;
    default:
        printf("error");
        break;
    }

    //Nested switch
     
    // switch(i)
    // {
    // case 1:

    //     printf("Enter text");
    //     scanf(" %c",&c);
    //     switch(c)
    //     {
    //     case 'a':
    //         printf("a");
    //         break;
    //     default:
    //         printf("error");
    //         break;
    //     }
    //     break;
    // case 2:
    //     printf("i=2");
    //     break;
    // case 3:
    //     printf("i=3");
    //     break;
    // default:
      //  printf("error");
       // break;
    //}
}