#include<stdio.h>
void toh(int n, int sou, int aux, int des){
	if(n==1){
		printf("Move disk 1 from source %d to destination %d\n",sou,des);
		return;
	}
	toh(n-1,sou,des,aux);
	printf("Move disk %d from source %d to destination %d\n",n,sou,des);
	toh(n-1,aux,sou,des);	
}

int main(){
	int n = 3;
	int s,d,a;
	s = 1;
	a = 2;
	d = 3;
	toh(n,s,a,d);
	return 0;
}
