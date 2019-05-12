#include<stdio.h>
int main(){
    int a = 2, b = 5;
    a ^=b;
    b ^= a;
    a ^= b;
    printf("%d, %d\n",a,b);
}
