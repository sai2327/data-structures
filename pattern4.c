#include<stdio.h>
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		for(j=1;j<=n;j++){
			printf("*");
		}
		printf("\n*");
	
		for(i=1;i<=n/2;i++){
		    printf(" ");
		}
		    printf("*\n");
		    printf("*");
		for(i=1;i<=n/2;i++){
		    printf(" ");
		}
		printf("*\n");
    	for(j=1;j<=n;j++){
			printf("*");
		}
		
	}
	
}
