#include<stdio.h>
#include<math.h>
int main(){
    int n=10001,i,c=0,count,num=2,latest;
    while(c!=n){
        int count=0;
        for(i=2;i<=sqrt(num);i++){
            if(num%i==0){
                count++;
                break;
            }
        }
            if(count==0){
                c++;
                latest=num;
            }
            num=num+1;
        }
        printf("%d",latest);
}
