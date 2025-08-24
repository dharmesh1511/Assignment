// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     FILE* dk;
//     dk=fopen("1st.txt","r");
//     if(dk == NULL)
//     {
//         printf("The file is not opend.");
//     }
//     else
//     {
//         printf("The file is opened.");
//     }
// }

//file in c
// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     FILE* dk;
//     dk=fopen("lakum.txt","w");
//     if(dk == NULL)
//     {
//         printf("The file is not opened.");
//     }
//     else
//     {
//         printf("The file is opened.");
//     }
// }

//Write in file

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* dk;
    char tops[50]="This is the program of file handling";
    char dd[50]="This is the dharmesh file";
    dk=fopen("lakum.txt","w");
    if(dk == NULL)
    {
        printf("The file is nit opened.");
    }
    else
    {
        printf("The file is opened.");
        fputs(tops,dk);
        fputs("\n",dk);
        fputs(dd,dk);
        fclose(dk);
        printf("Data is succesfully written in lakum.txt\n");
        printf("The file is now closed");
    }
}

//read from afile

// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     FILE* dk;
//     char data[50];
//     dk=fopen("lakum.txt","r");
//     if(dk == NULL)
//     {
//         printf("the file is not opened.");
//     }
//     else
//     {
//         printf("The file is opened\n");
//         while (fgets(data,50,dk)!=NULL)
//         {
//             printf("\n%s",data);
//         }
//         fclose(dk);
//     }
// }

//append file data
// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     FILE* dk;
//     char tops[50]="\n""Hello my name is Dharmesh.";
//     dk=fopen("lakum.txt","a");
//     if(dk == NULL)
//     {
//         printf("The file is not opened.");
//     }
//     else
//     {
//         printf("The file is opened");
//         fputs(tops,dk);
//         fputs("\n",dk);
//         fclose(dk);
//         printf("Data is succesfully append.");
//         printf("The file is closed");
//     }
// }