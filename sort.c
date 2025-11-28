#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
    for(int i=0;i<n-1;i++){
    	int flag=0;
    	for(int j=1;j<n;j++){
    		if(arr[j-1]>arr[j]){
    			int temp=arr[j];
    			arr[j]=arr[j-1];
    			arr[j-1]=temp;
    			flag++;
			}
		}
		if(flag==0){
			break;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
