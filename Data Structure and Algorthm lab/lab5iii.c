#include<stdio.h>
#include<conio.h>
int fib(int n){
	if(n == 0){
		return 0;
	}else if(n == 1){
		return 1;
	}else{
		return fib(n-1) + fib(n-2);
	}
}
int main(){
	int f,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\n");
	printf("%d\t",fib(n-1));
}
