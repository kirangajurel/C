//WAP in C to find all the divisor of a given number using functions.
#include<stdio.h>
int A();

int main(){
	
	
	A();
}
int A(){
	int i;
	int N;
	printf("Enter a number:\t");
	scanf("%d",&N);
	printf("The divisor of %d are:\n",N);
	for(i=1;i<=N;i++){
		if(N%i==0){
			printf("%d\n",i);
		}
	}
}