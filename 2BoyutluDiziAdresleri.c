#include <stdio.h>
#include <stdlib.h>

void satir_goster( int satir[ ] );
int main( void )
{
	int tablo[5][4] = {
			{4, 3, 2, 1},
			{1, 2, 3, 4},
			{5, 6, 7, 8},
			{2, 5, 7, 9},
			{0, 5, 9, 0} };
	int i, j;

	printf( "\n  2 Boyutlu Tablo %p Adresinden Baslar\n\n", tablo );


	printf( " Tablo Elemanlari ve Hafiza Adresleri:\n\n");
	for( i = 0; i < 5; i++ ) {
		for( j = 0; j < 4; j++ ) {
			printf( " %d (%p) ", tablo[i][j], &tablo[i][j] );
		}
		printf( "\n" );
	}


	printf( "\n Tablo Satirlarinin Baslangic Adresleri: \n\n");
	for( i = 0; i < 5; i++ )
		printf( " Tablo[%d]'nin baslangic adresi %p\n", i, tablo[i] );

	printf( "\n satir_goster( ) Fonksiyonuyla, "
		"Tablo Elemanlari ve Hafiza Adresleri:\n\n");
	for( i = 0; i < 5; i++ )
		satir_goster( tablo[i] );
		printf( "\n" );
		system("PAUSE");
}

void satir_goster( int satir[ ] )
{
	int i;
	for( i = 0; i < 4; i++ ) {
		printf( " %d (%p) ", satir[i], &satir[i] );
	}
	printf( "\n" );
}
