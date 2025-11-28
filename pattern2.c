#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(j=n;j>=1;j--){
		for(i=1;i<=j;i++){
			printf(" ");
		}
		for(k=1,i=j;i<=n;i++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
		
		
		
	}
}
