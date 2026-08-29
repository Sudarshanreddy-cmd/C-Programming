#include<stdio.h>
int main(){
    int a=10,b=30,c=40,d=5;
    if (a>b && a>c && a>d){
        printf("a is the greatest number");
    }
    else if(b>a && b>c && b>d){
    printf( "b is the greatest number");
    }
    else if(c>a && c>b && c>d){
        printf("c is the greatest number");
    }
    else if(d>a && d>b && d>c){
        printf("d is the greatest number");
    }
    return 0;
}