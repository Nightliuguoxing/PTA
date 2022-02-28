#include<stdio.h>
#include<string.h>

void main(){
    int i, num[101], sum = 0, k = -1, key[10], r, count = 0;
    char ary[101];
    gets(ary);

    for(i = 0; i < strlen(ary); i++){
        num[i] = (int) ary[i] - '0';
        sum += num[i];
    }

    do{
        r = sum % 10;
        key[++k] = r;
        sum /= 10;
    }while(sum >= 1);

    for(i = k; i >= 0; i--){
        if(count++){
            printf(" ");
        }
        switch (key[i]){
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        default:break;
	}
    }
    
    
    
}
