#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
    int status=1;
	for(i=1;i<=n;i++){
		if(status==1){
			for(j=1;j<=n;j++){
				printf("%d",j);
			}
			status=0;
			printf("\n");
		}
		else{
			for(j=n;j>=1;j--){
				printf("%d",j);
			}
			status=1;
			printf("\n");
		}
			
	}	
}
