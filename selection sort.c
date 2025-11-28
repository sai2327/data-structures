#include<stdio.h>
void selection_sort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		int idx=i;
		for(j=i+1;j<n;j++){
			if(arr[idx]>arr[j]){
				int temp=arr[idx];
			arr[idx]=arr[i];
			arr[i]=temp;
			}
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void bubble_sort(int arr[],int n){
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
void insertion_sort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j=i-1;
		while(j>=0 && temp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
	
}
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selection_sort(arr,n);
//	bubble_sort(arr,n);
//	insertion_sort(arr,n);
}
