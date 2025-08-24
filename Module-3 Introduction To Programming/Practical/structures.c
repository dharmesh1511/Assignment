// #include<stdio.h>
// struct A
// {
//     int x;
// };
// void main()
// {
//     struct A a;
//     a.x=15;
//     printf("%d",a.x);
//     
// }

//Array of structures

// #include<stdio.h>
// struct student
// {
//     char name[50];
//     int age;
//     float grade;
// };
// void main()
// {
//     // struct student s1={"Dharmesh",21,7.8};
//     // printf("%s\t%d\t%f\n",s1.name,s1.age,s1.grade);

//     // struct student s1={.age=22,.name="Hardik",.grade=8.9};
//     // printf("%s\t%d\t%f",s1.name,s1.age,s1.grade);

//     // struct student s1;
//     // printf("Enter your name::");
//     // scanf("%s",&s1.name);
//     // printf("Enter your age::");
//     // scanf("%d",&s1.age);
//     // printf("Enter your grade::");
//     // scanf("%f",&s1.grade);
    
//     // printf("%s\t %d\t %f\n",s1.name,s1.age,s1.grade);
// }

//Nested structure

// #include<stdio.h>
// struct child
// {
//     int x;
//     char b[78];
// };
// struct parent
// {
//     int a;
//     struct child d;
// };
// int main()
// {
//     // struct parent p={23,34,"Dharmesh"};
//     // printf("p.a=%d\n",p.a);
//     // printf("p.d.x=%d\n",p.d.x);
//     // printf("p.d.b=%s\n",p.d.b);

//     struct parent p;
//     printf("Enter number::");
//     scanf("%d",&p.a);
//     printf("Enter number::");
//     scanf("%d",&p.d.x);
//     printf("Enter name::");
//     scanf("%s",p.d.b);

//     printf("p.a=%d\n",p.a);
//     printf("p.d.x=%d\n",p.d.x);
//     printf("p.d.b=%s\n",p.d.b);
// }

//array of structure

#include<stdio.h>
struct dk
{
    int var;
};
void main()
{
    struct dk arr[2];
    printf("Enter your name:");
    scanf("%d",&arr[0].var);
    printf("Enter your number:");
    scanf("%d",&arr[1].var);
    // arr[0].var=10;
    // arr[1].var=20;
    for(int i=0;i<2;i++)
    {
        printf("%d\n",arr[i].var);
    }
}

