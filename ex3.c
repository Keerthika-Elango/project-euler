#include<stdio.h>
#include<math.h>
    int prime(long int n){
        int i,max;
        while(n%2==0){
            max=2;
            n=n/2;
        }
        for(i=3;i<=sqrt(n);i+=2){
            while(n%i==0){
                max=i;
                n=n/i;
            }
        }
        if(n>2){
            max=n;
        }
        printf("%d",max);
    }
    int main(){
        prime(600851475143);
    }
