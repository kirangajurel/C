#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i,j,temp;
		printf("Enter the number of element :\t");
		scanf("%d",&n);
	int *a;
	a=(int *)malloc(n*sizeof(int));
	printf("Enter the numbers:\t");
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(*(a+i)<*(a+j)){
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
		
	}
	printf("The numbers in assending order are:");
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
	return 0;
}