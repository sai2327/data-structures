#include<stdio.h>
#include<math.h>
int main(){
   int side1,side2,side3;
   printf("enter 3 sides:");
   scanf("%d %d %d",& side1 ,&side2 ,&side3);
   float s=(side1+side2+side3)/2;
   float area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
   printf("area=%f",area);
   
   return 0;
}
