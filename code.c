#include <stdio.h>
#include <string.h>

void reset(int *a){
    if(*a == 0 || *a >127){
        *a=33;
    }else{
        *a++;
    }
}

int main(){
    
   //short int red=33;
   //short int red2=33;
    int a[7]={0,0,0,0,0,0,0};
    // problema quando um valor for 33 mas este na senha for 0 ele vai fazer toda a volta
    // assim deixando lento demais

    char b[7];

    while(strcmp(b,"!a!")!=0){

        for(int i=0;i<7;i++){
            b[i]=a[i];
        }

        a[0]++; 
        if(a[0]>127){
            a[1]++;
            reset(&a[0]);

            if(a[1]>127)
            {
                reset(&a[2]);
                reset(&a[1]);
            }
        }
        printf("%c e %c e %c\n",a[0],a[1],a[2]);

    }
    
    printf("%s",b);
  
    
    
}