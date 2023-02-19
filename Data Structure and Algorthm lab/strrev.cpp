#include<stdio.h>
#include<string.h>
int i = 0;
char str[20];
void reverse(char *a){
	if(*a != '\0'){
		reverse(a+1);
		printf("%c",*a);
		str[i] = *a;
		i++;
	}else{
		return;
	}
}
int main(){
	char exp[20];
	printf("Enter string");
	scanf("%s",exp);
	reverse(exp);
	if(strcmp(exp,str) == 0){
		printf("\nPalindrome!");
	}else{
		printf("\nNot Palindrome!");
	}

}
