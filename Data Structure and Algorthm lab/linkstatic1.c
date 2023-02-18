#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int avail = -1;
struct list {
int info, next;
};
struct list node[MAX];
//get node - to create a new node
int getnode() {
    int p;
    if(avail == -1) {
        printf("Data cannot be added");
        exit(1);
    }
    p = avail;
    avail = node[avail].next;

    return p;
}

// free node - destroys a node

void freenode(int p) {
    node[p].next = avail;
    avail = p;
}

// inserting item into the available node

void insafter(int p, int x) {
    int q;
    if(p == -1) {
        printf("Invalid Operation");
        exit(1);
    }

    q = getnode();
    node[q].info = x;
    node[q].next = node[p].next;
    node[p].next = q;
}

// for deleting node 
void delafter(int p) {
    int q;
    if((p==-1) || node[p].next== -1) {
        printf("Invalid Operation");
        exit(1);
    }
    q = node[p].next;
    p = node[q].info;
    node[p].next = node[q].next;
    freenode(q);
}


void display(){
	int i;
	printf("{");
	for(i=0;i<avail;i++)
	{
		printf("(%d, %d), ", node[i].info, node[i].next);
	}
}

    void main() {
        int a;
        while(1) {
            int value, position;
        printf("Enter your choice\n");
        printf("1 Create new node(getnode)\n");
        printf("2 Destroy a node(freenode)\n");
        printf("3 Insert an item in the list(insafter)\n");
        printf("3 Delete an item from the list(delafter)\n");
        printf("4 Display elements in the list\n");
        
        scanf("%d", &a);
         switch (a)
        {
            case 1:
            getnode();
            break;
            case 2:
            printf("Enter position to be deleted");
            scanf("%d", &position);
            freenode(position);
            break;
            case 3:
            printf("Enter value and position to insert");
            scanf("%d %d",&value, &position);
            insafter(value, position);
            break;
            case 4:
            printf("Enter position to delete");
            scanf("%d ", &position);
            delafter(position);
            break;
            case 5:
            display();
            case 6:
            exit(1); 
            default:
            printf("Choice is wrong \n");
             }

        }
        
  }
