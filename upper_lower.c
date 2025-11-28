#include<stdio.h>
#include<ctype.h>
int main(){
	char c;
	scanf("%c",&c);
	if(isupper(c)){
		printf("%c",tolower(c));
	}
	else{
		printf("%c",toupper(c));
	}
}
