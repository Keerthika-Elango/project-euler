#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,k,n=1000;
    for(int i=0;i<n/3;i++){
        for(int j=i+1;j<n/2;j++){
          k=n-(i+j);
          x=pow(i,2);
          y=pow(j,2);
          z=pow(k,2);
          if(x+y==z){
              printf("%d",i*j*k);
          }
                }
            }
        }
  