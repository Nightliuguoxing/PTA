#include<stdio.h>

void main(){
    int i, nums[101] = { 0 }, count = 0, n;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        int temp;
        scanf("%d", &temp);
        nums[temp] = 1;
    }
    for(i = 0; i < 101; i++){
        if(nums[i] == 1){
            int temp = i;
            while (temp > 1){
                if(temp % 2 == 0) temp = temp >> 1;
                else temp = (3*temp + 1) >> 1;
                if(temp != 1 && temp < 101) nums[temp] = 0; 
            }
        }
    }
    for(i = 100; i >= 0; i--){
        if(nums[i] == 1){
            if(count != 0 ) printf(" ");
            printf("%d", i);
            count++;
        }
    }
}
