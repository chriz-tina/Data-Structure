#include<stdio.h>
int main() {
	int i,j,row,col,count=0,a[10][10];
	printf("Enter number of rows and columns:");
	scanf("%d%d",&row,&col);
	printf("Enter elements:");
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			scanf("%d ",&a[i][j]);
		} 
	printf("\n");
	}
	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			if(a[i][j]!=0) {
				count++;
		} } }
	int b[count+1][3];
	int k=1;
	b[0][0]=row;
	b[0][1]=col;
	b[0][2]=count;

	for(i=0;i<row;i++) {
		for(j=0;j<col;j++) {
			if(a[i][j]!=0) {
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
} } }
		
	printf("Row\tColumn\tValue\n");
	for(i=0;i<count+1;i++) {
		for(j=0;j<3;j++) {
			printf("%d\t",b[i][j]);
		}
	printf("\n");
}
return 0;
}
