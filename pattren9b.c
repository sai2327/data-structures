#include<stdio.h>
int main(){
	int n,i,j,m;
	scanf("%d",&n);
	m=n*2;
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--){
			printf("*");
		}
		for(j=1;j<=m-2;j++){
			printf(" ");
		}
		m-=2;
		for(j=n;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	m=2;
	for(i=1;i<n;i++){
		for(j=n;j>i;j--){
			printf("*");
		}
		for(j=1;j<=m;j++){
			printf(" ");
		}
		m+=2;
		for(j=n;j>i;j--){
			printf("*");
		}
		printf("\n");
	}
}
