#include<stdio.h>
int main(){
    int n=4;int product=1;
    for(int i=1;i<=n;i++){
        product*=i;
    }
    printf("factorial=%d",product);
    return 0;
}