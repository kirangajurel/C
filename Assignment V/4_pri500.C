//WAP in C to print all prime number less than 500 using function.
#include<stdio.h>

int P();

int main(){
	printf("The prime numbers upto 500 are:\n");
	P();
return 0;
}

int P(){
	int i,j,counter=0;
	for(i=2;i<=500;i++){
		for(j=;j<=i;j++){
			if(i%j == 0){
				counter++;
			}
		}
		if(counter==2){
		printf("%d \n",i);
		}
		counter=0;
	}
	return 0;
}