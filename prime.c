#include<stdio.h>
int main(){
	int i,n,c=0;
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
		   c=c++;
		   break;
	    }
	}
	if(c==1)
	  printf("not a prime");
	else
	  printf("prime");
	  
}
