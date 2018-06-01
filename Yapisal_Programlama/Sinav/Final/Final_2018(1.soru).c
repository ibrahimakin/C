#include <stdlib.h>
#include <stdio.h>

//Stringteki Rakamlari Ayirma,  Ornegin; Str1 = 123ce45 , Str2 = 123  45

void fonk(char *ptr1, char *ptr2){
	//int i=0; dizi olarak denendiginde
	while(*ptr1!='\0'){
		if(isdigit(*ptr1)){
			*ptr2=*ptr1;    // ptr2[i]
			ptr2++;		// i++;
		}
		else{
			*ptr2=' ';
			ptr2++;
		}
		ptr1++;
	}
	*ptr2='\0';
}
int main(){
	char str1[100],str2[100];
	scanf("%s",str1);
	fonk(str1,str2);
	printf("%s \n",str2);
	system("PAUSE");
	return 0;
}
