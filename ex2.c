#include<stdio.h>
#include<conio.h>
int main(){
    int sum=0,temp=0,a=0,b=1;

    do{
        if(b%2==0){
            sum=sum+b;
        }

        temp=a+b;
        a=b;
        b=temp;
    }while(b<4000000);
    printf("%d",sum);
}


