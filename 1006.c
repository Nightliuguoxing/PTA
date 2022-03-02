#include<stdio.h>

void main(){
    int num;
    scanf("%d", &num);

    int i, r, k = -1, ary[] = {0,0,0};

    do{
        r = num % 10;
        ary[++k] = r;
        num /= 10;
    }while(num >= 1);


    for(i = 0; i < ary[2]; i++){
        printf("B");
    }
    for(i = 0; i < ary[1]; i++){
        printf("S");
    }
    for(i = 1; i <= ary[0]; i++){
        printf("%d", i);
    }
   

}