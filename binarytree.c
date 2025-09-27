#include<stdio.h>
int main() {
	int i,n,p,a[30];
	printf("Enter number of nodes:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=1;i<=n;i++) {
		scanf("%d",&a[i]);
	}
	printf("Root node is %d\n",a[1]);
	printf("Enter position:");
	scanf("%d",&p);
	printf("Parent is %d\n",a[p/2]);
	
	if(a[p*2]>n) {
		printf("No left child\n");
	}
	else {
		printf("Left child is %d\n",a[p*2]);
	}
	
	if(a[p*2+1]>n) {
		printf("No right child\n");
	}
	else {
		printf("Right child is %d\n",a[p*2+1]);
	}

return 0;
}
