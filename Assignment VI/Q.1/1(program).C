#include<stdio.h>
int main(){
	int n;
		printf("Enter the numbers of elements in array:\t");
		scanf("%d",&n);
	double a[n];
	int i;
	double *p[n];
		printf("Enter the numbers in array:\t");
		for(i=0;i<n;i++){
			scanf("%d",a+i);
	p[i]=a+i;
	}
	for(i=0;i<n;i++){
		printf("\t%d",*p[i]);
	}	
}