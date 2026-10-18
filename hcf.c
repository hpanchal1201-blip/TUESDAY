#include<stdio.h>
// this program is to find HCF and LCM  any two numbers 
int main(){
 int a,b,l,h,i;
 printf("enter two nubers : ");
 scanf("%d%d",&a,&b);
 if(a>b){
    l=b;
 }
 else{
    l=a;
 }
 for(i=l; i>=1; i--){
   if(a%i==0 && b%i==0){
  h=i;
  break;
   }
 }
printf("HCF is = %d\n",h);
printf("LCM is = %d\n", a*b/h);
 return 0;
}