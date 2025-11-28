#include<stdio.h>
int main(){
	int n,i,j,m;
	scanf("%d",&n);
	m=n;
	for(i=0;i<n;i++){
	/*	for(j=0;j<n-1-i;j++){
			printf(" ");
		}
	*/
	    for(j=m;j>1;j--){
	    	printf(" ");
		}
		m--;
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
