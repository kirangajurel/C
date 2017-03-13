#include<stdio.h>
#include<stdlib.h>
int main(){
 int n,i;
 int count =0;
 
	printf("Enter the number of employee :");
	scanf("%d",&n);
	
int *a;
a= (int *)malloc(n*sizeof(int));

	printf("Enter the ages of all the employee:\t");
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	
	for(i=0;i<n;i++){
		if(*(a+i)>80){
		count++;
	
	}
 }
 if(count==0){
	 
	 printf("There are no employee over age 80.");
 }
 
 else{
	 
	printf("There are %d employee over age 80.",count);
 }
 return 0;

}