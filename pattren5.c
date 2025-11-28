#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		printf("*");
	}
	for(i=1;i<n-1;i++){
		printf("\n*");
		for(j=1;j<=n-2;j++){
		    printf(" ");			
		}
	printf("*");
	}
	printf("\n");
	for(j=1;j<=n;j++){
		printf("*");
	}
}
