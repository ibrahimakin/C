#include <stdlib.h>
#include <stdio.h>

// Cikti Sorusu, Cevap = 12 7 3

int main(){
    int a=1,b=2,c=3;
    int *ptr1,*ptr2,*ptr3;
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    *ptr1=*ptr2+*ptr3;
    *ptr2=*ptr1+2;
    ptr3=ptr1;
    *ptr1=*ptr2+*ptr3;
    printf("%d %d %d\n",a,b,c);
    system("PAUSE");
    return 0;
}
