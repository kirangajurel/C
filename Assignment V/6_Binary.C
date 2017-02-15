//WAP in C to convert decimal number to binary using functions.
#include<stdio.h>
int A();

int main(){
	A();
}
int A(){
	int N;
	int rem[100];
	int i=0;
	printf("Enter a number:\t");
	scanf("%d",&N);
	printf("In binary:\t");
	while(N!=0){
		rem[i]=N%2;
		N=N/2;
		i++;
	}
	for(int j=i-1; j>=0; j--){
		printf("%d", rem[j]);
		
	}
}