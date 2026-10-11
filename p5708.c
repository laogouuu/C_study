#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    double p=(a+b+c)/2;
    double s=p*(p-a)*(p-b)*(p-c);
    s=sqrt(s);
    printf("%.1f\n",s);
    return 0;
}