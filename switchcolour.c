#include<stdio.h>
int main(){
	char choice;
	switch(choice=toupper(getchar())){
		case 'R': 
		    printf("colour is red");
		    break;
		case 'B':
		    printf("colour is blue\n");
			break;
		case 'O':
		    printf("colour is orange\n");
			break;
		default:
		    printf("colour is invalid");
			    
	}
}

