#include<stdio.h>
int main(){
    int english,maths,hindi;
    float total,percentage;
    printf("enter english score (0-100): \n");
    scanf("%d",&english);
    printf("enter maths score (0-100): \n");
    scanf("%d",&maths);
    printf("enter hindi score (0-100): \n");
    scanf("%d",&hindi);
    total=english+maths+hindi;
    percentage=total/300.0*100;
    printf("percentage=%.2f\n",percentage);
    if(english>=33 && maths>=33 && hindi>=33 && percentage>=40) {
        printf("pass\n");
        }
    else{
        printf("fail\n");
    }
    return 0;
}