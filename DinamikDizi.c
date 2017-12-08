#include <stdio.h>
#include <stdlib.h>

void dinamik_dizi_olustur(int **dizi, int eleman_sayisi){
    int i;
    *dizi = (int *)malloc(eleman_sayisi*sizeof(int));
    for(i=0;i<eleman_sayisi;i++){
        *(*dizi+i)= rand()%99;
        }
}

void tek_boyutlu_dizi_yaz(int *dizi, int eleman_sayisi){
    int i;

    for(i=0;i<eleman_sayisi;i++){
        printf("0x%p ", (dizi+i));
    }

    printf("\n");
    for(i=0;i<eleman_sayisi;i++){
        printf("%9d  ", *(dizi+i));
    }
    printf("\n");
}

int main()
{
    int **A, **B, **C;
    int *dizi;
    int eleman_sayisi;
    srand(time(NULL));
    eleman_sayisi = 10;
    dinamik_dizi_olustur(&dizi, eleman_sayisi);
    tek_boyutlu_dizi_yaz(dizi, eleman_sayisi);
    system("PAUSE");
    return 0;
}
