#include<stdio.h>
#include<stdlib.h>
int main(){
    char *b = (char*)malloc(sizeof(char)*2);
    *b = 7;
    printf("%d", sizeof(*b));
}
