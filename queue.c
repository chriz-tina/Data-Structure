#include<stdio.h>
void enqueue(int n,int *rear,int queue[]) {
	int item;
	if(*rear>=n-1) {
		printf("Overflow");
	}
	else {
		printf("Enter element to be inserted:");
		scanf("%d",&item);
		(*rear)++;
		queue[*rear]=item;
	}
	
}

void dequeue(int *rear,int *front,int queue[]) {
	if(*front>*rear) {
		printf("Underflow");
	}
	else {
		printf("Element %d deleted",queue[*front]);
		(*front)++;
	}
	
}

void display(int queue[],int front,int rear) {
	if(front>rear) {
		printf("Queue empty\n");
	}
	else {
		for(int i=front;i<=rear;i++) {
			printf("%d",queue[i]);
	} } }

int main() {
	int n,choice,front=0,rear=-1;
	printf("Enter size:");
	scanf("%d",&n);
	int queue[n];
	do {
		printf("***QUEUE OPERATIONS***");
		printf("1.Enqueue\n2.Dequeue\n3.Display\n");
		printf("Enter choice:");
		sacnf("%d",&choice);
		switch(choice) {
			case 1:
				enqueue(rear,n,queue);
				break;
			case 2:
				dequeue(rear,front,queue);
				break;
			case 3:
				display(queue,front,rear);
				break;
			default: printf("Invalid choice");
		} }
while(choice!=4);
return 0;
}
