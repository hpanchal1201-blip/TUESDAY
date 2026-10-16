#include<stdio.h>
// program to find odd and even number 
int main(){
    int n;
    printf("enter number=");
    scanf("%d",&n);
    if(n%2==0){
        printf("number is even ");
    }
    else{
        printf("number is odd");
    }
    return 0;
}