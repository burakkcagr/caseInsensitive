#include <stdio.h>
#include <ctype.h>

/*
	toupper fonksiyonu küçük bir karakteri büyük harfe,
	tolower fonksiyonu da büyük harf bir karakteri küçük harfe dönüştürür.
	int toupper(int ch);
	int tolower(int ch);
*/


int main(void)
{
	int ch;

	printf("(e)vet/(h)ayir?\n");
	ch = getchar();
	ch = tolower(ch);

	if (ch == 'e')
		printf("evet\n");
	else if (ch == 'h')
		printf("hayir\n");
	else
		printf("e ya da h girilmedi!\n");


	return 0;
}