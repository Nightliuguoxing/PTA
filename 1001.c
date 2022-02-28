#include<stdio.h>

void main(){
    int num, count = 0;
    scanf("%d", &num);   
    while(num != 1){
        if(num % 2 == 0){
            count += 1;
            num = num >> 1;
        }else{
            count += 1;
            num = (3*num + 1) >> 1;
        }
    }
    printf("\n%d", count);
}


