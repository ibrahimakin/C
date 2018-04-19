#include <stdio.h>
#include <stdlib.h>

int EnBuyukSayi(int a,int b,int c){
    int ebs;
    ebs=a;
    if(b>ebs){ ebs=b; }
    if(c>ebs){ ebs=c; }
    return ebs;
}

void MatrisTopla(int A[3][3],int B[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            A[i][j]=A[i][j]+B[2-i][j];
        }
    }
}

int Topla(int a){
    if(a==0)
        return 0;
    return (a+(Topla(a-1)));
}

int main(void)
{
    int a,b,c,ebs;
    printf("\n 3 Sayi Giriniz \n 1. Sayi = ");
    scanf("%d",&a);
    printf(" 2. Sayi = ");
    scanf("%d",&b);
    printf(" 3. Sayi = ");
    scanf("%d",&c);
    ebs=EnBuyukSayi(a,b,c);
    if(ebs==a){ printf(" En Buyuk Sayi = %d  Sirasi = 1 \n\n",a); }
    else if(ebs==b){ printf(" En Buyuk Sayi = %d  Sirasi = 2 \n\n",b); }
    else{ printf(" En Buyuk Sayi = %d  Sirasi = 3 \n\n",c); }


    int A[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int B[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("\n 1,2,3      7,8,9\n 4,5,6  =>  4,5,6\n 7,8,9      1,2,3\n\n 10,20,30     7,8,9 \n 40,50,60  +  4,5,6 \n 70,80,90     1,2,3 \n\n");
    MatrisTopla(A,B);
    int i,j;
    for(i=0 ; i<3 ; i++){
        printf("\t");
        for(j=0 ; j<3 ; j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    int s,x;
    printf("\n\n Recursive Kaca kadar sayilarin toplami? ");
    scanf("%d",&s);
    x=Topla(s);
    printf("\n %d 'e kadar sayilarin toplami  %d \n\n",s,x);

    system("PAUSE");
    return 0;
}
