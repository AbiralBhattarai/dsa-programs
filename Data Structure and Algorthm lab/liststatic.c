#include<stdio.h>
#define NUMNODES 100
struct nodetype{
	int info,next;
};
struct nodetype node[NUMNODES];
int avail = 0;
int getnode(){
	int p;
	if(avail == -1){
		printf("Data can't be added.'");
		exit(1);
	}
	p = avail;
	avail = node[avail].next;
	return p;
}
void freenode(int p){
	node[p].next = avail;
	avail = p;
}
void insafter(int p,int q){
	if(p == -1){
		printf("Invalid operation");
		exit(1);	
	}
	q = getnode();
	node[q].info = q;
	node[q].next = node[p].next;
	node[p].next = q;
}
void delafter(int p){
	int q,x;
	if(p==-1 || node[p].next == -2){
		printf("Invalid deletion!");
		exit(1);
	}
	q = node[p].next;
	x = node[q].info;
	node[p].next = node[q].next;
	freenode(q);
}
void display(){
	int i;
	for(i=0;i<NUMNODES;i++){
		printf("%d\t",node[i].info);
	}
}
int main(){
	int i,c,pos;
	printf("How many data do you want to enter?");
	scanf("%d",&c);
	if(c > NUMNODES){
		printf("VALUE TOO LARGE!!");
	}else{
		for(i = 0;i<c;i++){
		printf("Enter data : ");
		scanf("%d",&node[i].info);
		node[i].next = i + 1;
		avail++;
	}
	display();
	pos = getnode();
	printf("POS : %d",pos);
	delafter(2);
	printf("\n");
	display();	
	}
	
	
}
