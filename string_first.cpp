#include<stdio.h>
#include<string.h>

#define MAX_STR 100
#define MAX_NOMI 100

/*
strlen(str) lunghezza stringa
strcpy(str1,str2) copia la seconda nella prima
strcat(str1,str2) unisce 
strncpy(str1,str2) copia nel primo n caratteri del secondo
strstr(str1,str2) cerca parola di str2 in str1
strcmp(str1,str2) resto intero str1=str2 (ris=0), str1<str2 (ris=-1)
*/


char nomi[MAX_NOMI][MAX_STR];


void carica_vet(int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("inserisci una lettera \n");
		scanf("%s",nomi[i]);
	}
	
}


void stampa_vet(int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%s \n", nomi[i]);
	}
	
}


void scambia_vet(int n)
{
	int i;
	
	
}


int main (){

	int n;
	printf("quanti nomi vuoi inserire \n");
	scanf("%d",n);

	carica_vet(n);	
	stampa_vet(n);	
	scambia_vet(n);		
}
