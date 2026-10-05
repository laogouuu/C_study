#include<stdio.h>

int main(){
    int a[5] ={1,2,3,4,5};
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    printf("%zu\n",sizeof(a));
    printf("%d\n",*(a+1));
    printf("%d\n",a[1]);


    return 0;
}