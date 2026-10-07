//第 1 步：读入字符串
//第 2 步：一个个字符走一遍，是元音就让计数器 +1
//第 3 步：从后往前把字符串打出来（反转）
#include<stdio.h>
#include<string.h>
int main(){
    char s[105];
    int i;
    int cnt = 0;
    scanf("%s", s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            cnt++;
        }
    }
    printf("%d\n",cnt);
    int a = strlen(s)-1;
    for(;a>=0;a--){
        printf("%c",s[a]);

    }
    printf("\n");
    return 0;
}