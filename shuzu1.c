#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[1005];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
            int max = a[0];
            for(int b=1;b<n;b++){
                if(a[b]>max){
                    max = a[b];
                }
            }
            int min = a[0];
            for(int c=1;c<n;c++){
                if(a[c]<min){
                    min = a[c];
                }
            }
            printf("%d\n",max-min);

    return 0;
}