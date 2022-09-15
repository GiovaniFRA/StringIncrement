#include <stdio.h>

int main(){
   int caracteres[80];
   int val=65;
   //65 - 90

   for (int i = 0; i <90-65; i++)
   {

        caracteres[i]=val;
        printf("%d ",val);
        val++;

       
   }

   for(int i=0;i<90-65;i++){
        printf("c",caracteres[i]);
   }
   
}