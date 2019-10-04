#include<stdio.h>
#define MAX_VET 100

void scambia_int(int *ptra, int *ptrb)	// var 1 --> var 2
{
	int dep;
	dep=*ptra;
	*ptra=*ptrb;
	*ptrb=dep;

}


void carica_vet(int *vet, int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("inserisci un numero \n");
		scanf("%d", &vet[i]);
	}
	
}


void stampa_vet(int *vet, int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%d ", vet[i]);	
	}
	printf("\n");
}


/*
void stampa_vet_inversa(int *vet, int n)
{
	int i;
	
	for(i=(n-1);i>-1;i--)
	{
		printf("%d ", vet[i]);	
	}
	printf("\n");
}
*/


void seleciotn_sort(int *vet, int n)	//dal pi� piccolo al pi� grande
{
	int i, posmin, j;
	for(i=0;i<(n-1);i++)
	{
		posmin=i;
		for(j=(i+1);j<n;j++)
		{
			if(vet[j]<vet[posmin])
				posmin=j;
		}
			
		scambia_int(&vet[i], &vet[posmin]);
	}
	
}

void anti_seleciotn_sort(int *vet, int n)	//dal pi� grande al pi� piccolo
{
		int i, posmin, j;
	for(i=0;i<(n-1);i++)
	{
		posmin=i;
		for(j=(i+1);j<n;j++)
		{
			if(vet[j]>vet[posmin])
				posmin=j;
		}
			
		scambia_int(&vet[i], &vet[posmin]);
	}
}


int main (){

	int len, numeri[MAX_VET], ord;
	printf("quanti numeri vuoi inserire \n");
	scanf("%d",&len);

	carica_vet(numeri, len);
	
	printf("premi 1 per crescente e 2 per decrescente \n");
	scanf("%d",&ord);
	
	if(ord==1)
		seleciotn_sort(numeri, len);
	else
		anti_seleciotn_sort(numeri, len);
		
	stampa_vet(numeri, len);	/*stampa_vet_inversa(numeri, len);*/
	
}
