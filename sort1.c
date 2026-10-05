#include<stdio.h>
void swap(int*x,int*y);
int main(){
    int a[5]={5,1,4,2,8};
    int i;
    int j;
    for(i=0;i<4;i++){
        for(j=0;j<4-i;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
            }
        }
        }
    
    for(i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
void swap(int*x,int*y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}