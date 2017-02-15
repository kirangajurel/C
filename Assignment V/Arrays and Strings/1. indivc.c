//Write a Program in C to input any 10 elements in an array and display them using function.
#include <stdio.h>

void passing(int a);

void main(){
	int i,arr[10];
	printf("Enter 10 numbers: \n");
	for (i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("The numbers are: \n");
	
	for(i=0;i<10;i++){
		passing(arr[i]);
	}
}

void passing(int a){
	printf(" %d \n",a);
}
	
