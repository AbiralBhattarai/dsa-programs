#include<stdio.h>
#include<conio.h>
int sum(int n){
	if(n == 0){
		return 0;
	}else{
		return n + sum(n-1);
	}
}
int main(){
	int f,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("\n");
	printf("%d",sum(n));
}
