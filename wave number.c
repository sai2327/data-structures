#include<stdio.h>
int main(){
	int cnt=0,n,r1,r2,r3;
	scanf("%d",&n);
	if(n>0 && n<100){
		printf("wave number");
		cnt+=5;
	}
	if (n < 9999 && n > 1000) {
    int d1 = n / 1000;     
    int d2 = (n / 100) % 10;  
    int d3 = (n / 10) % 10;   
    int d4 = n % 10;         
    if ((d1 < d2 && d2 > d3 && d3 < d4) || (d1 > d2 && d2 < d3 && d3 > d4)) {
        printf("wave number\n");
        cnt+=2;
    } else {
        printf("not a wave number\n");
        cnt+=2;
    }}
	while(n>0){
		if (n < 9999 && n > 1000){
			break;
		}
		if(n>0 && n<100){
			break;
		}
		r1=n%10;
		n=n/10;
		r2=n%10;
		if(r1==r2){
			cnt++;
			break;
		}
		else if(r2>r1){
			n=n/10;
			r1=n%10;
			if(r2>r1){ 
				continue;
			}
			else{
				cnt++;
				break;
			}
		}
		else if(r2<r1){
			n=n/10;
			r1=n%10;
			if(r2<r1){
				continue;
			}
			else{
				cnt++;
				break;
			}
		}
	}
	if(cnt==0){
		printf("wave number");
	}
	else if(cnt==1){
		printf("not a wave number");
	}
}

