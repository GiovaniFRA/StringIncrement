#include <stdio.h>
#include <string.h>

void zerar(int *a){
    *a=0;
}

int main(){
    int red=0;
    int red2=0;
    int a[7];
    
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;
    a[5]=0;
    a[6]=0;

    while(a[2]!=1){

        a[0]++;
        
        if(a[0]>254){
           a[0]=red;
           a[1]++;

            if(a[1]>254){
                red++;
                a[1]=red2;
                a[2]++;
                  if(a[2]>254){
                      red2++;
                  }  
            }
        }
        printf("%d e %d e %d\n",a[0],a[1],a[2]);

       

    }
    char b[]={a[2]+97,a[1],0,0,0,0};
    printf("%s",b);
    
    
}