#include<stdio.h>
int main(){
	int n,i,j,m=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=m;j>=1;j--){
			printf("%d ",j);
		}
		m++;
		printf("\n");
	}
}
