#include<stdio.h>
int *search();
int main(){
	
	printf("The address of the number you entered is %u",search());
	return 0;
}

int *search(){
	int n;
	int count=0;
		printf("Enter the number of element in the array:\t");
		scanf("%d",&n);
	int i,find;
	int *p[n];
	int *a;
	int E[n];
	printf("Enter the numbers in array:\t");
	for(i=0;i<n;i++){
		scanf("%d",&E[i]);
		p[i]=&E[i];
	}
	printf("Enter the number you want to find");
	scanf("%d",&find);
	for(i=0;i<n;i++){
	if(find==*p[i]){
		a=p[i];
		return a;
			
		}
		else{
			count++;
		}
	}
	if(count==n){
		return NULL;
	}
	}
	
