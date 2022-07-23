#include<stdio.h>
#include<conio.h>

int main(){
    long long int a=600851475143,i;

    for(i=a-1;i>=0;i--){
        while(a%i==0){
            printf("%lld",i);
            break;
        }
        
    }
}