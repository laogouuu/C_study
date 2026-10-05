#include<stdio.h>
int main()
{
    double n;
    int i;
    scanf("%lf",&n);
    if(n<=150){
        i=0;
    }else if(n<=400){
        i = 1;
    }else{
        i = 2;
    }
    switch(i){
        case 0:
            printf("%.1f\n",n*0.4463);
            break;
        case 1:
            printf("%.1f\n",150*0.4463+(n-150)*0.4663);
            break;
        case 2:
            printf("%.1f\n",150*0.4463+250*0.4663+(n-400)*0.5663);
            break;
    }
    return 0;
}