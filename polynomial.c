#include<stdio.h>

struct Poly{
	int coef;
	int exp;
	}
x1[15];
int main() {
	int n,i;
	printf("Enter number of terms:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		printf("\nEnter coefficient of %dth term:",i+1);
		scanf("%d",&x1[i].coef);
		printf("\nEnter exponent of %dth term:",i+1);
		scanf("%d",&x1[i].exp);
		}
	printf("Polynomial is:\n");
	for(i=0;i<n;i++) {
		if(i==n-1) {
			printf("%dx^%d\t",x1[i].coef,x1[i].exp);
			break;
			}
		printf("%dx^%d+",x1[i].coef,x1[i].exp);
		}
		printf("\n");
return 0;
}
