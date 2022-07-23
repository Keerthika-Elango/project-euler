#include<stdio.h>
#include<stdlib.h>
int main(){
    for(int i=999;i>=100;i++){
        int p=i*999;
        int x=p;
        while(x!=0){
            int rem=x%10;
            int rev=rev*10 + rem;
            x=x/10;
            }
        if(p==x){
            printf("%d",p);
            break;
        }   
    }
}