//WAP in C to input a number and check whether the number is palindrome or not using function.
#include<stdio.h>
#include<conio.h>
int PALIN(int a);
int main(){
	int a,c;
	printf("Enter any number to check if it is palindrome or not:\t");
	scanf("%d",&a);
	c=PALIN(a);
	if(c==a)
	{
		printf("%d is palindrome .",a);
	}
	else
	{
		printf("%d is not palindrome .",a);
	}
	return 0;
}
int PALIN(int a){
	int temp,reverse=0;
	temp=a;
	while(temp!=0){
		reverse=reverse*10;
		reverse=reverse+temp%10;
		temp=temp/10;
	}
	return reverse;
}
