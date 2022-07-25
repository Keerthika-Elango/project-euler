#include<stdio.h>
int main(){
    int i,sum1=0,sum2=0,total=0,diff;
    for(i=1;i<=100;i++){
        sum1=sum1+(i*i);
    }
    for(i=1;i<=100;i++){
        total=total+i;
    }    
    sum2=(total)*(total);
   diff=sum2-sum1;
    printf("%d",diff);
}
