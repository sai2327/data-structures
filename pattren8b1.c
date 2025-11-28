#include<stdio.h>
int main(){
	int i,j,n,start=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==1){
			start+=1;
			for(j=start;j<start+n;j++){
				printf("%d",j);
			}
		}
		else{
				start+=2*n-1;
				for(j=start;j>start-n;j--){
					printf("%d",j);
				}
		}
		printf("\n");
	}
}
