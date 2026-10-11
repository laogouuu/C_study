#include<stdio.h>
int main(){
    int h,r;
    scanf("%d %d",&h,&r);
    int l=h*r*r*314;
    int cont=(20*100000+l-1)/l;
    printf("%d\n",cont);

    return 0;
}
