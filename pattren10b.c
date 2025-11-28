#include<stdio.h>
int main(){
	int n,i,j,m=0;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=m;j++){
			printf(" ");
		}
		m+=2;
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	m=2*n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		for(j=1;j<=m-2;j++){
			printf(" ");
		}
		m-=2;
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}

