#include<stdio.h>
int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}

int mul(int a, int b)
{
    return (a*b);
}

int main(int argc,
         int *argv[])
{
    if (argc < 5)
        return -1;
    int (*f_ptr []) (int,int) = {add, sub, mul};
    printf("Result is: %d", (*f_ptr[argv[2]]) (argv[3],argv[4]));
    return 0;
}
