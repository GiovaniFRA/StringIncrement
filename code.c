#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reset(int *a){
    if(*a<33 || *a >127){
        *a=33;
    }else{
        *a+=1;
    }
}

int main(){
    FILE *arquivo;

    arquivo=fopen("pass.txt","w");
    if(arquivo==NULL){
        puts("falha ao salvar no arquivo");
        system("exit");
    }

   //short int red=33;
   //short int red2=33;
    int a[13]={0,0,0,0,0,0,0,0,0,0,0,0,0};
    // problema quando um valor for 33 mas este na senha for 0 ele vai fazer toda a volta
    // assim deixando lento demais
    int cont=0;
    char b[13];
    //iniciado 21:36
    while(strcmp(b,"ab")!=0){

        for(int i=0;i<13;i++){
            b[i]=a[i];
        }
    cont++;
    if(cont%2==0){
        for(int i=0;i<13;i++){
            fprintf(arquivo,"%d ",a[i]);
        }
        fprintf(arquivo,"\n");
    }

        reset(&a[0]);
        if(a[0]==127){
            reset(&a[1]);

            if(a[1]==127){
                reset(&a[2]);

                if(a[2]==127){
                    reset(&a[3]);

                    if(a[3]==127){
                        reset(&a[4]);

                        if(a[4]==127){
                            reset(&a[5]);

                            if(a[5]==127){
                                reset(&a[6]);

                                 if(a[6]==127){
                                    reset(&a[7]);

                                     if(a[7]==127){
                                        reset(&a[8]);

                                         if(a[8]==127){
                                            reset(&a[9]);

                                            if(a[9]==127){
                                                reset(&a[10]);

                                                if(a[10]==127){
                                                    reset(&a[11]);
                                                     if(a[11]==127){
                                                        reset(&a[12]);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    
    }
    
    printf("%s",b);
  
    
    
}