#include <stdio.h>
#include <stdlib.h>
struct hucre{
    int icerik;
    struct hucre *sonraki;
};

struct hucre* hucre_olustur(int icerik){
    struct hucre *a;
    a = (struct hucre*)malloc(sizeof(struct hucre));
    if(a == NULL){
        printf("heap alaninda yer ayrilamadi ...\n");
        exit(1);
    }
    a->icerik = icerik;
    a->sonraki = NULL;
    return a;
};

void liste_basina_ekle(int icerik, struct hucre **liste_basi){
    struct hucre* a = hucre_olustur(icerik);
    a->sonraki = *liste_basi;
    *liste_basi = a;
}

void liste_yaz(struct hucre *liste_basi){
    while(liste_basi != NULL){
        printf("%4d ", liste_basi->icerik);
        liste_basi=liste_basi->sonraki;
    }
    printf("\n");
}

void liste_sonuna_ekle(int icerik, struct hucre **liste_basi){
    struct hucre* a=hucre_olustur(icerik);
    if(*liste_basi == NULL){
        a->sonraki = *liste_basi;
        *liste_basi = a;
    }
    else{
        struct hucre *x = *liste_basi;
        while(x->sonraki!=NULL){
            x=x->sonraki;
        }
        x->sonraki = a;
    }
}

int main()
{
    struct hucre *liste_basi = NULL;
    liste_basina_ekle(100,&liste_basi);
    liste_basina_ekle(19,&liste_basi);
    liste_basina_ekle(61,&liste_basi);
    liste_basina_ekle(86,&liste_basi);
    liste_yaz(liste_basi);
    system("PAUSE");
    return 0;
}
