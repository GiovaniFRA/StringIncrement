#include <stdio.h>
#include <string.h>


int main(){
   short int red=33;
   short int red2=33;
   short int a[7]={33,33,33,0,0,0,0};
    

    char b[7];

    while(strcmp(b,"cab")!=0){

        for(int i=0;i<7;i++){
            b[i]=a[i];
        }

        a[0]++;
        if(a[0]>127){
           a[0]=red;
           a[1]++;

            if(a[1]>127){
                red++;
                a[1]=red2;
                a[2]++;
                  if(a[2]>127){
                      red2++;
                  }  
            }
        }
        printf("%c e %c e %c\n",a[0],a[1],a[2]);

       

    }
    
    printf("%s",b);
  
    
    
}