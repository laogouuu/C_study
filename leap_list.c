#include<stdio.h>
int isleap(int year){
    if((year%4==0 && year%100!=0) || year%400==0){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int x , y;
    
    scanf("%d %d",&x,&y);
    int i =0;
    for(int year = x; year<=y; year++){
        if(isleap(year)){
            i++;
        }
    }
    printf("%d\n",i);
        int first =1 ;
    for(int year = x; year<=y; year++){
        if(isleap(year)){
            if(first == 1){
            printf("%d",year);
            first = 0;
            }else{
                printf(" %d",year);
            }
            }
        }printf("\n");
        return 0;
    }
       
    
