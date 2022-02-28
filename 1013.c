#include<stdio.h>

int prime(int n);

void main(){
    int m, n, i, count = 0, out = 0;
    scanf("%d %d", &m, &n);
    for(i = 1; 1; i++){
        if(prime(i) == 1){
            count++;
            if(count >= m && count <= n) {
                out++;
                printf("%d", i);
                if(out % 10 == 0){
                    printf("\n");
                }else{
                    if(count + 1 > n) break;
                    printf(" ");
                }
            }
        }
    }
}


int prime(int n) {
	int i;
	if (n < 2) {
		return 0;
	} else {
		for (i = 2; i < n; i++) {
			if (n % i == 0)
				break;
		}
		if (i < n) {
			return 0;
		} else {
            return 1;
        }
	}
	return 0;
}