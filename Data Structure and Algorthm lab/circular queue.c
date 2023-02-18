#include <stdio.h>
#define SIZE 10
int cq[SIZE],front = -1, rear = -1;
int isfull(){
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)){
 	 return 1; 	
  }else{
  	return 0;	
  }
}
int isempty(){
  if (front == -1){
  		return 1;
  }else{
  	return 0;	
  }
}
void enq(int a){
  if (isfull())
    printf("queue full\n");
  else{
    if (front == -1) {
		front = 0;
    	rear = (rear + 1) % SIZE;
    	cq[rear] = a;
    	printf("%d enqueued \n", a);
	}
  }
}

int deq(){
  int a;
  if (isempty()) {
    	printf("queue empty \n");
    	return (-1);
  }else{
    a= cq[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    }
    else 
      front = (front + 1) % SIZE;
    }
    printf("Deleted %d \n", a);
    return (a);
  }

void display() {
  int i;
  if (isempty()){
  	printf("queue empty\n");
  }else{
    printf("Front %d ", front);
    printf("Items");
    for (i = front; i != rear;i = (i + 1) % SIZE) {
      printf("%d", cq[i]);
    }
    printf("%d", cq[i]);
    printf("Rear %d \n", rear);
  }
}

int main() {
  enq(1);
  enq(2);
  enq(3);
  deq();
  return 0;
}

