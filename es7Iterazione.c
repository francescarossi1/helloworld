/*Dato N un numero intero positivo maggiore di 1, generare e visualizzare
il numero precedente. */

#include <stdio.h>

int main(int argc, char *argv[])
{

	int num;

	do
	{
		printf(" Scrivi un numero ");
		scanf("%d", &num);
	} while (num < 1);

	num = num - 1;

	printf("Il numero precedente è %d", num);

	return 0;
}