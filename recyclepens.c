#include<stdio.h>
int main(){
	int pens,amount,recycle,refil;
	scanf("%d %d %d %d",&pens,&amount,&recycle,&refil);
	int low=1,high=pens,mid,ans=0;
	while(low<=high){
		int mid=(low+high)/2;
		int remain_pens=pens-mid;
		int gain=remain_pens*recycle;
		int total=gain + amount;
		if(mid * refil<=total){
			ans=(mid>ans)?mid:ans;
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	printf("%d",ans);
}
