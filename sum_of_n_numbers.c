#include<stdio.h>
int main(){
	int sum=0,count=0,n,num;
	printf("enter n");
	scanf("%d",&n);
	while(count<n){
		printf("enter a num");
		scanf("%d",&num);
		sum=sum+num;
		++count;
	}
	printf("sum of n numbers is %d",sum);
	return 0;
}
