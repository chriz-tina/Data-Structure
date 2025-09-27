#include<stdio.h>
int main() {
	int i,n,j,temp,s,a[10];
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	printf("Enter elements:");
	for(i=0;i<n;i++) {
		scanf("%d ",&a[i]);
	}
	printf("Unsorted array:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++) {
		s=i;
	for(j=i+1;j<n;j++) {
		if(a[s]<a[j]) {
			s=j;
		} }
	if(i!=s) {
		temp=a[i];
		a[i]=a[s];
		a[s]=temp;
	} }
	printf("Sorted array:");
	for(i=0;i<n;i++) {
		printf("%d ",a[i]);
	}
	printf("\n");
return 0;
}
