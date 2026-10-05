#include<stdio.h>
// 爱心程序 - 第二版（演示 git 同步）
int main(){
    float x,y,z;

    for(y=1.4;y>-1.4;y-=0.1){
        for(x=-1.5;x<1.5;x+=0.05){
            z = x*x+y*y-1;
            float f = z*z*z-x*x*y*y*y;
            if(f<=0.0){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}