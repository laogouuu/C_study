#include<stdio.h>
void swap(int* x,int* y);
int main(){
    int a = 1;
    int b = 2;
    printf("%d\n",a);
    printf("%d\n",b);
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
void swap(int *x,int* y){
    int z;
    z = *x;
    *x = *y;
    *y = z;
}