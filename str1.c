#include<stdio.h>
#include<string.h>
int main(){

    char s[]="hello";
    printf("%s\n",s);
    printf("%zu\n",sizeof(s));
    printf("%zu\n",strlen(s));
    int i;
    for(i=0;i<sizeof(s)-1;i++){
        printf("%c\n",s[i]);
    }
    return 0;
}