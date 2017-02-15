#include <stdio.h>

int power(int,int);
int i;

int main(){
	printf(" x^y= RESULT \n\n");
	int x,y;
	
	
	printf("Enter value of x : ");
	scanf("%d",&x);
	
	printf("Enter value of y : " );
	scanf("%d",&y);
	
	double ans = power(x,y);
	printf("\n\t%d^%d = %.2f\n",x,y,ans);
}

int power(int num, int pow){
	int X=num;
	for(i=1;i<pow;i++){
		X=X*num;
	}
	return X;
}