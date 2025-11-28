#include<stdio.h>
int main(){
	int j,i,n,c=0,a,b;

	scanf("%d %d",&a,&b);
	for(j=a;j<=b;j++){
	    for(i=2;i<n;i++){
		    if(n%i==0){
		       c=c++;
		       break;
	        }
	    }
	}
	if(c==1)
	  printf("not a prime");
	else
	  printf("prime");
	  
}
