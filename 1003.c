#include<stdio.h>
#include<string.h>
int main(){
    int i, n;
    char str[100];
    scanf("%d", &n);
    while(n--){
        int flag = 1, cl = 0, cm = 0, cr = 0, judge = 0;
        scanf("%s", &str);
        for(i = 0; i < strlen(str); i++){
            if(str[i] == 'P' || str[i] == 'A' || str[i] == 'T'){
                if(judge == 0 && str[i] == 'A') cl++;
                else if(judge == 0 && str[i] == 'P') judge = 1;
                else if(judge == 1 && str[i] == 'A') cm++;
                else if(judge == 1 && str[i] == 'T') judge = 2;
                else if(judge == 2 && str[i] == 'A') cr++;
                else flag = 0;
            }else{
                flag = 0;
                break;
            }
        }
        if(judge != 2 || cl*cm != cr || cm == 0) flag = 0;
        if(flag == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}