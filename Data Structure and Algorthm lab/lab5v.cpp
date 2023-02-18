#include<stdio.h>
#include<conio.h>
int sum = 0;
int rev(int n){
	int rem;
	if(n>0){
		rem = n%10;
		sum = sum*10 + rem;
		return rev(n/10);
	}else{
		return sum;
	}
}
int main(){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);	 
	printf("%d",rev(n));
}
