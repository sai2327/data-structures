#include<stdio.h>
int main(){
	int n,i,j;
	char c='A';
	scanf("%d",&n);
	for(j=1;j<=n;j++){
		for(c='A',i=1;i<=j;i++){
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
}
