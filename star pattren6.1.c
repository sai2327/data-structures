#include<stdio.h>
int main(){
/*	int i,j;
    int size;
    scanf("%d",&size);
	for (i=size;i>=1;i--){
        for(j=1;j<=i-1;j++){
            printf(" ");
        }
        for(j=i;j<=size;j++){
            printf("* ");
        }
        printf("\n");
    }
*/  
    int n,i,j,m;
    scanf("%d",&n);
    m=n*2;
    for(i=1;i<=n;i++){
    	for(j=i;j<=n;j++){
    		printf(" ");
		}
/*		for(j=m-1;j<2*n;j++){
			printf("* ");
	    }
	    m-=2;
*/	    
        for(j=1;j<=2*i-1;j++){
        	printf("*");
		}
		printf("\n");
	}

        
}
