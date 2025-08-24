//category 1:Without return type without parameter value
#include<stdio.h>
void Add_number()
{
    int number1,number2,result;
    printf("Enter first number::");
    scanf("%d",&number1);
    printf("Enter second number::");
    scanf("%d",&number2);
    //printf("Enter two number::");
    //scanf("%d %d",&number1,&number2);
    printf("\nNumber1:%d",number1);
    printf("\nNumber2:%d",number2);
    result=number1+number2;
    printf("\nAddition result::%d",result);
}
void main()
{
    Add_number();
    printf("\n");
}

//category 2:Without return type with parameter value
// #include<stdio.h>
// void Add_number(int,int);
// void main()
// {
//     int number1,number2;

//     printf("Enter two number::");
//     scanf("%d %d",&number1,&number2);
//     printf("\nNumber1:%d",number1);
//     printf("\nNumber2:%d",number2);
//     Add_number(number1,number2);
//     Add_number(20,30);
// }
// void Add_number(int x,int y)
// {
//     int result;
//     result=x+y;
//     printf("\nAddition result::%d",result);
// }

// //category 3:With return type without parameter value
// #include<stdio.h>
// int Add_numbers();
// void main()
// {
// 	int res;
	
// 	res=Add_numbers();
	
// 	printf("\n Addition result is:%d",res);
//     res=Add_numbers();
	
// 	printf("\n Addition result is:%d",res);
	
// }
// int Add_numbers()
// {
// 	int result;
// 	int number1,number2;
	
// 	printf("\n Enter two numbers:");
// 	scanf("%d%d",&number1,&number2);
	
// 	printf("\n number1:%d",number1);
// 	printf("\n number2:%d",number2);
	
// 	result=number1+number2;
// 	printf("\n Addition result is:%d",result);
// 	return result;
// }

//category 4:With return type with parameter value
// #include<stdio.h>
// int Add_numbers(int,int);
// void main()
// {
// 	int number1,number2,res;
	
// 	printf("\n Enter two numbers:");
// 	scanf("%d%d",&number1,&number2);
	
// 	printf("\n number1:%d",number1);
// 	printf("\n number2:%d",number2);
	
// 	res=Add_numbers(number1,number2);
// 	printf("\n Addition result is:%d",res);
//     // Add_numbers(number1,number2);
//     // Add_numbers(35,40);
	
// }
// int Add_numbers(int x,int y)
// {
// 	int result;
// 	result=x+y;
// 	return result;
// }