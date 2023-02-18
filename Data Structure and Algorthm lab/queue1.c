#include<stdio.h>
#include<conio.h>
#define maxsize 20
int f = 0,r = -1,queue[maxsize];
void enq(int a){
	if(r == maxsize -1){
		printf("Full queue");
	}
	else{
		r = r + 1;
		queue[r] = a;
	}
}
int deq(){
	int data;
	if (f == 0 && r == -1 ){
		printf("\nEmpty queue\n");
	}else{
		data = queue[f];
		f++;	
	}
	return data;
}
void display(){
	int i;
	for(i = f ;i<=r;i++){
		printf("%d\t",queue[i]);
	}
	printf("\n");
}
int main(){
	enq(2);
	display();
	enq(3);
	display();
	printf("%d",deq());
}
