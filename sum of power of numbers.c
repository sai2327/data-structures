#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
       sum=sum+i*i;//if i*i*i -->i^3
    printf("sum of squares of first n natural numbers:%d",sum);
    
	
}
