#include <stdlib.h>
#include <stdio.h>

//Bagli Liste ile Fibonacci sayilarinin yazilmasi

struct n{
    int x;
    struct n *next;
};
typedef struct n node;
void fib_liste(node *head, int k){
    int i;
    head->x=0;
    head->next=(node*)malloc(sizeof(node));
    head->next->x=1;
    node *temp=malloc(sizeof(node));
    temp=head;
    for(i=1;i<k;i++){
        node *yeni=malloc(sizeof(node));
        yeni->next=NULL;
        yeni->x=fib_bul(temp->x,temp->next->x);
        temp->next->next=yeni;
        temp=temp->next;
    }
}
int fib_bul(int x,int y) {
    return (x+y);
}
void fib_yaz(node *head){
    node *temp=malloc(sizeof(node));
    temp=head;
    while(temp->next!=NULL){
        printf("%d - ",temp->x);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int k;
    printf("Kacinci Fibonacci Sayisina Kadar? ");
    scanf("%d",&k);
    node *head=malloc(sizeof(node));
    fib_liste(head,k);
    fib_yaz(head);
    system("PAUSE");
    return 0;
}
