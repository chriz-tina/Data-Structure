#include<stdio.h>
int main() {
	int n,i,step,temp;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(step=0;step<n-1;step++) {
		for(i=0;i<n-step-1;i++) {
			if(a[i]>a[i+1]) {
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			} } }
	printf("Sorted array is:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
printf("\n");
return 0;
}
	
