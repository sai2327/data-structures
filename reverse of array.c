#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int left =0;
	int right=n-1;
	while(left<right){
		int temp=arr[right];
		arr[right]=arr[left];
		arr[left]=temp;
		right--;
		left++;
	}
	for(int i=0;i<n;i++){
	    printf("%d ",arr[i]);
    }
}
