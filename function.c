#include<stdio.h>
void add(void);
int sub(void);
int div(int, int);
void multi(int, int);
int a,b,result;
int main()
{
//	add();
	
//	result = sub();
//	printf("The Subtraction of A and B is: %d",result);  

	
//	code for div function

//	printf("Enter Value of A: ");
//	scanf("%d",&a);
//	printf("Enter Value of B: ");
//	scanf("%d",&b);
//	result = div(a, b);
//	printf("%d is result",result);
	
//	code for multi function
	printf("Enter Value of A: ");
	scanf("%d",&a);
	printf("Enter Value of B: ");
	scanf("%d",&b);
	multi(a, b);
	
	
	return 0;
}


//add function
void add(void)
{
	printf("Enter Value of A: ");
	scanf("%d",&a);
	printf("Enter Value of B: ");
	scanf("%d",&b);
	result = a + b;
	printf("The sum of %d and %d is: %d",a,b,result);
}

//sub function
int sub()
{
	printf("Enter Value of A: ");
	scanf("%d",&a);
	printf("Enter Value of B: ");
	scanf("%d",&b);
	result = a - b;
	return result;
}

int div(int a, int b)
{
	
	result = a / b;
	return result;
}

void multi(int a, int b)
{
	result = a * b;
	printf("Multiplication of %d and %d is %d",a,b,result);
}
