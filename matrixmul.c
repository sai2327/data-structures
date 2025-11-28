#include<stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int n1,m1;
	scanf("%d %d",&n1,&m1);
	int arr1[n1][m1];
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	if(m!=n1){
		printf("not possible");
		return 0;
	}
	int arr2[n][m1];
	for(int i=0;i<n;i++){
		for(int j=0;j<m1;j++){
			int s=0;
			for(int k=0;k<m;k++){
				s+=arr[i][k]*arr1[k][j];
			}
			arr2[i][j]=s;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m1;j++){
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}	
}
