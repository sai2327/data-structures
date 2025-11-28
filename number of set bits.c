#include<stdio.h>
#include<math.h>
int main(){
	int n,cnt,i;
	scanf("%d",&n);
    int mask=1;
    if(n==0){
    	cnt=0;
	}
	else{
    for(i=0;i<=sqrt(n);i++){
    	mask=(1<<i);
    	if((n | mask)==n){
    		cnt++;
		}
	}
}
	printf("%d",cnt);
}
