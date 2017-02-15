//Return and arguments.
#include<stdio.h>
int x;
int A();
int B(int a);
int C();
int D(int d);
int main(){
	int a,b,choice;
	printf("Enter 1 to perform program using no return and no argument.\n");
	printf("Enter 2 to perform program using no return and with argument.\n ");
	printf("Enter 3 to perform program using return and no argument.\n ");
	printf("Enter 4 to perform program using  return  and with argument.\n");
	printf("Enter number to decide the method of operation:\t");
	scanf("%d",&choice);
	switch(choice){
		case 1:
		printf("## No Argument And No Return:\n\n");
			A();
			break;
		case 2:
		printf("## With Argument And No Return:\n\n");
			int a;
			printf("Please enter a number:");
			scanf("%d",&a);
			B(a);
			break;
		case 3:
		printf("## With Return And No Argument.\n\n");
			int c;
			c=C();
			
			if(c==1)
				{
					printf("%d is exactly divisible by 5 and 7.",x);
				}
			if(c==0)
				{
					printf("%d is not exactly divisible by 5 and 7",x);
				}
				return 0;
				break;
		case 4:
		printf("## With Return And With Argument:\n\n");
			int d,e;
			printf("Enter any number : \t");
			scanf("%d",&d);
			c=D(d);
			if(c==1)
			{
				printf("%d is exactly divisible by 5 and 7",d);
			}
			if(c==0)
			{
				printf("%d is not exactly divisible by 5 and 7",d);
			}
			return 0;
			break;
			
			default:
			printf("\n\n\t YOUR COMMAND IS NOT ACCEPTABLE.");
	 return 0;
	}
}	
	
int A(){
	int a;
	printf("Please enter a number:\t");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
		{
			printf("%d is exactly divisible by 5 and 7.",a);
		}
	else
		{
			printf("%d is not exactly divisible by 5 and 7",a);
		}
		return 0;
}
int B(int a){
	
	 
	 if(a%5==0&&a%7==0){
		printf("%d  is exactly divisible by 5 and 7",a);
	 }
	 else
	 {
		printf("%d is not exactly divisible by 5 and 7",a);
	 }
	 return 0;
}
int C(){
		int a,b;

	printf("Enter any number :\t");
	scanf("%d",&a);
	x=a;
	
	if(a%5==0 && a%7==0)
		{
			b=1;
		}
	else
		{
			b=0;
	}
	return b;
}
int D(int d){
	int b;
	if(d%5==0&&d%7==0)
	{
		b=1;
	}
	else 
	{
		b=0;
	}
	return b;
}
