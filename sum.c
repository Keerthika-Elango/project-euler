#include<stdio.h>
#include<math.h>
int main(){
    int n,x,p=0,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        x=pow(i,2);
        sum=sum+x;
    }
    for(int i=1;i<=n;i++){
        p=p+i;
    }
    int y=pow(p,2);
    printf("%d",y-sum);
}