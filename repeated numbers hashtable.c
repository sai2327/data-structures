
#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[max]<arr[i]){
			max=i;
		}
	}
	max=max+1;
	int freq[max];
	for(int i=0;i<max;i++){
		freq[i]=0;
	}
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		printf("%d",freq[i]);
	}
	for(int i=0;i<max;i++){
		if(freq[i]!=0){
			printf("\n%d",i);
		}
	}
}
