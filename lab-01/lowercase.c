#include<stdio.h>
int main(){
    char ch = 'A';
    printf("ch=%c\n", ch);
    printf("ch=%d\n",ch);
    if (ch >=97 && ch <= 122){
        printf("ch is a lowercase letter\n");
    }
    else{
        printf("ch is not a lowercase letter\n");
    }
    return 0;
    }