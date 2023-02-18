#include<stdio.h>
#include<conio.h>
int fact(int n){
	if(n == 0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}
int main(){
	int f,n;
	printf("Enter a number: \n");
	scanf("%d",&n);
	f = fact(n);
	printf("Factorial of %d is %d ",n,f);
	return 0;
}
