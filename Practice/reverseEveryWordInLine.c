#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Given string reverse each word of the string
 * INPUT: How are You?
 * OUTPUT: woH era ?uoY
 */

char *reverseString(char *str)
{
    int i, start, end;
    for(i=0, start=0; str[i]!='\0'; i++, start=i) {
        while(str[i] != ' ' && str[i] != '\0')
            i++;
        end = i-1;
        while(start < end) {
            str[start] ^= str[end];
            str[end] ^= str[start];
            str[start++] ^= str[end--];
        }
    }
    return str;
}

int main(int argc, char *argv[])
{
    if (argc <= 1)
    {
        printf("Provide string to reverse as argument to program within \"\"\n");
        return 1;
    }
    char *str = (char *) malloc(15 * sizeof(char));
    str = strcpy(str, argv[1]);
    //printf("Reverse of a '%s'", argv[1]);
    printf("Reverse of a '%s' is '%s'\n", argv[1], reverseString(str));
    free(str);
    return 0;
}
/*while(str[i] != '\0') {
    while(str[i] != ' ' && str[i] != '\0')
        i++;
    end = i-1;
    while(start < end) {
        str[start] ^= str[end];
        str[end] ^= str[start];
        str[start++] ^= str[end--];
    }
    if (str[i] != '\0')
    {
        start = i+1;
        i++;
    }*/
