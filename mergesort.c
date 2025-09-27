#include<stdio.h>
	void merge(int arr[],int left,int mid, int right){
		int n1=mid-left+1;
		int n2=right-mid;
		int leftarr[n1];
		int rightarr[n2];
		for(int i=0;i<n1;i++){
			leftarr[i]=arr[left+i];
		}
		for(int j=0;j<n2;j++){
			rightarr[j]=arr[mid+1+j];
		}
		int i=0, j=0,k=left;
		while(i<n1 && j<n2){
			if(leftarr[i]<=rightarr[j]){
				arr[k]=leftarr[i];
				i++;
			}
			else{
				arr[k]=rightarr[j];
				j++;
			}
				k++;
				}
		while(i<n1){
			arr[k]=leftarr[i];
			i++;
			k++;
		}
		while (j<n2){

			arr[k]=rightarr[j];
			j++;
			k++;
		}
		}

void mergesort(int arr[],int left,int right){
	if(left<right){
	int mid=(left+right)/2;
	mergesort(arr,left,mid);
	mergesort(arr,mid+1,right);
	merge(arr,left,mid,right);
	}
}
void printarr(int arr[], int size){
	for(int i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

int main(){
	int size;
	printf("enter the no of elements: ");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements: ");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("unsorted array: ");
	printarr(arr,size);
	printf("\n");
	mergesort(arr,0,size-1);
	printf("sorted array is: ");
	printarr(arr,size);
	printf("\n");

return 0;
}
