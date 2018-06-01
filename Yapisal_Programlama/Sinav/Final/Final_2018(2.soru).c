#include <stdlib.h>
#include <stdio.h>

//OGR yapisinda dizideki elemanlarý vize ve numaralara gore siralama

typedef struct{
    char isim[10];
    int no,vize;
}OGR;
void sirala(OGR dizi[50]){
    int i,j;
    OGR temp;
    for(i=0;i<50;i++){
        for (j=0;j<50;j++){
            if(dizi[i].vize==dizi[j].vize){
                if(dizi[i].no<dizi[j].no){
                    temp=dizi[i];
                    dizi[i]=dizi[j];
                    dizi[j]=temp;
                }
            }
            else if(dizi[i].vize>dizi[j].vize){
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
}
int main(){
    int i;
    OGR dizi[50];
    for(i=0;i<50;i++){
        dizi[i].no=1+rand()%1000;
        dizi[i].vize=1+rand()%100;
    }
    for(i=0;i<50;i++){
        printf("%.2d. OGR ,Numara %.3d , Vize %.2d\n",i+1,dizi[i].no,dizi[i].vize);
    }
    sirala(dizi);
    printf("\n ----- SIRALANDI ----- \n");
        for(i=0;i<50;i++){
        printf("%.2d. OGR ,Numara %.3d , Vize %.2d\n",i+1,dizi[i].no,dizi[i].vize);
    }
    system("PAUSE");
    return 0;
}
