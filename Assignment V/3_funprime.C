//WAP in C to find whether the given number is prime or not using function.
#include<stdio.h>
#include<conio.h>
int fun(int a);
int main(){
	int a,c;
	printf("Enter any number to check if it is prime or not.\t");
	scanf("%d",&a);
	c=fun(a);
	if(c==2){
		printf("\n\n%d is a prime number.",a);
	}
	else{
		printf("\n\n%d is not a prime number.",a);
	}
return 0;
}
int fun(int a){
	int i,counter=0;
	for(i=1;i<=a;i++){
			if(a%i==0){
				counter++;
			}
		}
	return counter;
}
