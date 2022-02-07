#include<stdio.h>

int main(){

    int i, is_prime ,sayac;
    int asal[1000]={} ,num ,k=3;

    asal[0]=1;
    asal[1]=2;
    asal[2]=3;



     for(num=5;num<=1000;num++){

    is_prime=1;

        for(i=2;i<num/2;i++){

            if(num%i==0){
            is_prime=0;
            // printf("\n%d-->%d",num,i);-->>>68-->2,68-->4,68-->17
            }
         }

         if(is_prime==1){
           
           asal[k]=num;
           k++;
           
        }

        sayac=k;
     }

    printf("ASAL SAYI|FARKLAR\n");
    printf("---------|-------");
    
    for(k=1;k<sayac;k++){

        if(asal[k]!=0)
         printf("\n   %-3d   |>  %d",asal[k],asal[k]-asal[k-1]);

    }

    printf("\n\nToplamda %d tane Asal sayi bu aralikta bulunmaktadir.\n\n",sayac-1);

    return 0;
}
