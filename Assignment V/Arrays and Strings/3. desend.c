//Write a program in c to input any 10 number in an array and sort them in descending order using function. 
#include <stdio.h>

void passing(int A[]);

int i;

void main(){
	int arr[10];
	printf("Enter 10 numbers :");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	passing(arr);
	
}

void passing(int A[]){
	int temp,j;
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(A[i]>A[j]){
				temp=A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
	printf("Arranging in descending order : ");
	for(i=0;i<10;i++){
		printf("%d\t",A[i]);
	}
}

