#include<stdio.h>
int main(){
	int n,o=0,m=0;
	scanf("%d",&n);
	char s[104];
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='1'){
			o++;
		}
		else{
			m++;
		}
	}
	if(o>m){
		printf("gogi");
	}
	else{
		printf("kiddo");
	}
}
