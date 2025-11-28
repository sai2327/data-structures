#include<stdio.h>
int main(){
	int n,m,i=1;
	scanf("%d %d",&n,&m);
	//even numbers for loop
/*	for(i=1;i<=n;i++){
		if(i%2==0)
			printf("%d",i);
	}
*/	//even in while loop
	
/*	while(i<=n){
		if(i%2==0)
		printf("%d",i);
		i++;
	}
	*/
	//odd in for loop
/*	for(i=1;i<=n;i++){
		if(i%2!=0)
		printf("%d",i);
		
	}
	//odd in while loop
	while(i<=n){
		if(i%2!=0)
		printf("%d",i);
		i++;
	}
	*/
	for(i=n;i<=m;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
}
