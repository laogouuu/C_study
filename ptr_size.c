#include<stdio.h>
int main(){
    int a = 5;
    int*p = &a;
    printf("&p =%p\n",&p);
    printf("p = %p\n",p);
    printf("&a = %p\n",&a);
    printf("sizeof(p)=%zu\n",sizeof(p));
    printf("sizeof(a)=%zu\n",sizeof(a));
    return 0;
}
