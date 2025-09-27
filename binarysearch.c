#include<stdio.h>
int main() {
	int a[10],i=0,n,x,left=0,flag=0,mid;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++) {
 		scanf("%d",&a[i]);
	}
	int right=n-1;
	printf("Enter element to be searched:");
	scanf("%d",&x);
	
	
		while(left<=right) {
			mid=(left+right)/2;
		if(x==a[mid]) {
			
			flag=1;
			break;
		}
		else if(x<a[mid]) {
			right=mid-1;
			}
		else if(x>a[mid]) {
			left=mid+1;
			
			}
		} 
	
	if(flag==0) {
		printf("Element not found");
	}
	else if(flag==1) {
		printf("Element found at position %d\n",mid+1);
	} 

return 0;
}
