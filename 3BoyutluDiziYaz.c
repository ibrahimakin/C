#include <stdio.h>
#include <stdlib.h>
void yazdir(int (*dizi)[4][3],int size) {
         int i,j,k; for(i=0;i<size;i++) {
              for(j=0;j<4;j++) {
                for(k=0;k<3;k++) {
                    printf("%d ",dizi[i][j][k]);
                }
                printf("\n");
              }
              printf("\n");
        }
}

int main() {
    int dizi[2][4][3]={{{1,2,3},{2,3,4},{3,4,5},{4,5,6}},{{5,6,7},{6,7,8},{7,8,9},{8,9,0}}};
    yazdir(dizi,2);
    system("PAUSE");
    return 0;
}
