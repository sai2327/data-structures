#include<stdio.h>
int main(){
	int n,m,i,s=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		if(i%2==0){
			s=s+i;
		}
	}
	printf("%d",s);
}
