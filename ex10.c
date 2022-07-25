#include<stdio.h>
#include<math.h>
    int prime(long int n){
        int i,max,sum=0;
        
        for(i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                sum=sum+i;
                n=n/i;
            }
        }
        
        printf("%d",sum);
    }
    int main(){
        prime(2000000);
    }
