#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	c=c & ~(' ');   // ~(1<<5) -->~(100000)
	printf("%c\n",c);
	
	char x='b';
	x=x | ' ';
	printf("%c",x);
}
