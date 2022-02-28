#include<stdio.h>
#include<string.h>

void main(){
    char ary[101];
    scanf("%s", &ary);

    int i;
    for(i = 0; i < strlen(ary); i++){
        printf("%s", ary[i]);
    }
    
}