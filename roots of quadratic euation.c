#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float disc,d,i,ip,rp;
	float root1,root,root2;
	printf("enter a b then c");
	scanf("%d %d %d",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0){
		d=sqrt(disc);
	   printf("roots are real and distinct");
	   root1=(-b+d)/(2*a);
	   root2=(-b-d)/(2*a);
	   printf("roots are %f %f",root1, root2 );
	   }
	else {
	    if(disc==0){
	        printf("roots are real and equal");
	        root=(-b)/(2*a);
	        printf("root is %f",root);
			}
	    else {
	        printf("roots are imaginary");
            rp = -b / (2 * a);
            ip = sqrt(-disc) / (2 * a);
            printf("root1 = %.2f+i%.2f and root2 = %.2f-i%.2f", rp, ip, rp, ip);
        }
			    
    }
}
