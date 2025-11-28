#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x=0;
	for(int i=0;i<n;i++){
		x^=arr[i];
	}
	printf("%d",x);
}
