#include<stdio.h>
#include<string.h>
int main(){

    char s1[]="hello";
    char s2[]="hello";
    printf("%d\n", s1 == s2);
    printf("%d\n", strcmp(s1, s2));

    return 0;
}