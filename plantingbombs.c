#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k,cnt=0,cnt1=0;
	scanf("%d",&k);
	for (int j=1;j<n-1;j++){
		if (a[j] == 1 || a[j-1] == 1 || a[j+1] == 1){
			cnt1++; 
		}
		else {
			cnt++;
			k--;
		}
	}
	if (k!=0 && cnt1>0){
		printf("Not Possible");
	}
	else if (k==0 && cnt>0) {
		printf("%d bombs Possible",cnt);
	}
}
