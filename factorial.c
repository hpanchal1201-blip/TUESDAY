#include<stdio.h>
// this program is to find the factorial of anu number
int main(){
long n,f=1, i;
printf("enter number");
scanf("%ld",&n);
for(i=1; i<=n; i++){
    f=f*i;
}
printf("factorial is %ld",f);
return 0;
}