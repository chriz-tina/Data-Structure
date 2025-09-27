#include<stdio.h>
int main() {
	char ch;

	int a[10],i,x,n,count=0;
    do {
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
		}
	printf("Enter element to be searched:");
	scanf("%d",&x);

	for(i=0;i<n;i++) {
		if(a[i]==x) {
			printf("Element found at position %d\n",i+1);
			count++;
		}

	}
	if(count==0) {
		printf("Element not found.");
	}
printf("\nDo you want to continue?");
scanf(" %c",&ch);
}
  while(ch=='y');
  printf("\nExiting...\n");
return 0;
}
