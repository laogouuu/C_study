#include<stdio.h>
#include<string.h>
void my_strcpy(char*dst,char *src){
    int i = 0;
    for(i=0;src[i]!=0;i++){
        dst[i] = src[i];
        
    }
    dst[i]='\0';
}
int main(){
    char dst[20];
    char str[6]="hello";
    int a = 0;
    for(a=0;a<19;a++){
        dst[a]='x';
    }
    dst[19] ='\0';
    printf("原来的 ：%s\n",dst);
    my_strcpy(dst,str);
    printf("%s\n",dst);
    printf("%s\n",str);

    return 0;
}