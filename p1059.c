//输入n，再输入n个整数
//冒泡将数字从小到大排序
//把重复的数字去掉
//输出最后的数量和排好的数据
#include<stdio.h>
void swap(int*x,int*y);
int main(){
    int i;
    int a[105];
    scanf("%d",&i);
    for(int j=0;j<i;j++){
        scanf("%d",&a[j]);
    }

    for(int j=0;j<i-1;j++){
        for(int k=0;k<i-1-j;k++){
            if(a[k]>a[k+1]){
                swap(&a[k],&a[k+1]);
            }
        }
    }
    int b[105];
    int cut = 0;
    b[cut]=a[0];
    cut++;
    for(int m= 1;m<i;m++){
        if(a[m]!=a[m-1]){
            b[cut]=a[m];
            cut++;
        }
    }
    printf("%d\n",cut);
    printf("%d",b[0]);
    for(int q=1;q<cut;q++){
        printf(" %d",b[q]);
    }
    printf("\n");
    return 0;
}
void swap(int *x,int *y){
        int b;
        b = *x;
        *x = *y;
        *y = b;
    }