//Implementation of stack
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 10
int top = -1,stack[MAXSIZE];
int isfull(){
	if(top == MAXSIZE - 1){
		return 1;
	}else{
		return 0;
	}
}
int isempty(){
	if(top == -1){
		return 1;
	}else{
		return 0;
	}
}
void peek(){
	if(isempty()){
		printf("Stack is empty!");
	}else{
		printf("Data on top of stack is %d\n",stack[top]);
	}
}
void display(){
	int i;
	printf("DATA from stack is \n");
	for(i=0;i<=top;i++){
		printf("%d\t",stack[i]);
	}
}
void push(int a){
	if(isfull()){
		printf("Stack is full!");
	}else{
		top = top + 1;
		stack[top] = a;
	}
}
void pop(){
	int data;
	if(isempty()){
		printf("Stack is empty!");
	}else{
		data = stack[top];
		top = top -1;
		printf("POPPED DATA : %d\n",data);
	}
}
void main(){
	int c,num;
	char ch;
	printf("MENU:-\n");
	printf("1.Push\n2.POP\n3.PEEK\n4.DISPLAY \n5.Exit \n");
	while(1){
		printf("\nEnter Choice: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				printf("Enter data to push : ");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
			default:
				printf("\nWrong choice");
		}	
	}
}
