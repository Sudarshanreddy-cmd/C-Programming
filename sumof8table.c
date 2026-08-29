#include<stdio.h>
int main(){
    int sum=0;
    for(int i=8;i<=80;i+=8){
        sum+=i;
    }
    printf("sum=%d",sum);
    return 0;
}