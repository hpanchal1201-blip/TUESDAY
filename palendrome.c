#include<stdio.h>
int main (){
    int r,n,m,s=0;
    printf("enter number :");
    scanf("%d",&n);
 m=n;
  while(n>0){
   r=n%10;
   s=s*10+r;
   n=n/10;
  }
       printf("%d\n",s);
   if(s==m){
    printf("number is palendrome");
   }
   else{
    printf("number is not palendroeme");
   }
   return 0;
}