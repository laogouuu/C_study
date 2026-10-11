#include<stdio.h>
int main(){
    int a,t,s;
    int rest;
    scanf("%d %d %d",&a,&t,&s);
    if(t==0){
        rest=0;
    }else{
        rest = a-(s+t-1)/t;
    }
    if(rest<0){
        rest=0;
    }
    printf("%d\n",rest);

    return 0;

}