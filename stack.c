#include<stdio.h>
int main() {
	int top=-1,n,i,op,item ;
	printf("Enter the size of stack:");
	scanf("%d",&n);
	int stack[n];
	do {
		printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("Enter the choice:");
		scanf("%d",&op);
	switch(op) {
		case 1:
			if(top>=n-1){
			printf("overflow");
		}
		else{
			printf("Enter the element to be inserted:");
			scanf("%d",&item);
			stack[top]=item;
			top++;

		}
			break;
		case 2:
			if(top==-1) {
				printf("underflow");

			}
			else{
				stack[top]=item;
				top--;
				printf("Element deleted is %d",item);
			}
				break;
		case 3:
			if(top==-1) {
				printf("Stack is empty");
			}
			else{
				for(i=0;i<=top;i++){
				printf("Stack is %d",stack[i]);
			}
				printf("\n");
				}
				break;
		case 4:
			printf("Exiting");
			break;
			}

		}while(op!=4);
return 0;
}
