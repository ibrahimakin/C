#include <stdio.h>
#include <stdlib.h>

int main(){

    int B[4][5]={{4564,16,5,42,3},{64,55,66,76,8},{454,165,5,2,3},{454,16,5,26,3}};

    diziF(&B[0],4);

    printf("\n");
    return 0;
}

void diziF(int (*dizi)[5],int size){
    int i,j;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
       // printf("%4d\n",dizi[i][j]);
        printf("%4d",*(*(dizi+i)+j));
        }
    printf("\n");
    }
    system("PAUSE");
}
