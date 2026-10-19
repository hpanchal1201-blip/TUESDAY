#include<stdio.h>
int main(){
    long n,i,t;
    printf("Enter number to find table");
    scanf("%ld",&n);
    for(i=1; i<=10; i++){
    t=i*n;
        printf(" %ld\n",t);

    }
    return 0;
}
