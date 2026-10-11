#include<stdio.h>
int main(){
    int s,v;
    scanf("%d%d",&s,&v);
    int walk=10;
    if(s%v!=0){
        walk++;
    }
    int sum=s/v+walk;
    int b=6*80-sum;
    if(b<0){
        b+=1440;
    }
    int h=b/60;
    int c=b%60;
    printf("%02d:%02d",h,c);
    return 0;
}