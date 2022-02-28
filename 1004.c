#include<stdio.h>

typedef struct {
    char name[100];
    char id[100];
    int grade;
}Student;

void main(){
    int n, i, j;
    scanf("%d", &n);
    Student s[n], t;    
    for(i = 0; i < n; i++){
        scanf("%s %s %d", &s[i].name, &s[i].id, &s[i].grade);
    }
    for(i = 0; i < n-1; i++){
        for(j = i + 1; j < n; j++){
            if(s[i].grade < s[j].grade){
                t = s[i];
                s[i] = s[j];
                s[j] = t;
            }
        }
    }

    printf("%s %s\n", s[0].name, s[0].id);
    printf("%s %s", s[n-1].name, s[n-1].id);
}