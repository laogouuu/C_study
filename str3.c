#include<stdio.h>
#include<string.h>
int my_strlen(char *s){
    int i = 0;
   while(*s){
    s++;
    i++;
   }
    
    
    return i;
}
int main(){
    char s[]="hi";
    printf("%d\n",my_strlen(s));
    printf("%zu\n",strlen(s));

    return 0;
}