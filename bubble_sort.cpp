
#include<stdio.h>
#define MAX_VET 100


void scambia_int(int *ptra, int *ptrb)	// var 1 --> var 2
{
	int dep;
	dep=*ptra;
	*ptra=*ptrb;
	*ptrb=dep;

}

/*
void bubble_sort_for(int *vet, int n)	// da più piccolo a più grande con 2 for
{
	int i, scambiato, j, temp;
	scambiato= 1;
	for (i=0;i<n && scambiato==1;i++)
	{
		scambiato=0;
		for(j=0;j<n-1-i;j++)
		{
			if(vet[j]>vet[j+1])
			{
				scambia_int(&vet[j], &vet[j+1]);
				scambiato= 1;
			}
		}
	}
}
*/

void bubble_sort_while(int *vet; int n)		//da più piccolo a più grande con while
{
	int i, j, scambiato;
	i=n-1;
	scambiato=1;
	
	while(scambiato&&i>0)
	{
		scambiato=0;
		for(j=0;j<n-1-i;j++)
		{
			if(vet[j]>vet[j+1])
			{
				scambia_int(&vet[j], &vet[j+1]);
				scambiato= 1;
			}
		}
	i--;
	}
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

int main(){
	
	int len, numeri[MAX_VET], ord;
	
	printf("quanti numeri vuoi inserire \n");
	scanf("%d",&len);

	carica_vet(numeri, len);
	bubble_sort_while(numeri, len); //bubble_sort_for(numeri, len);
	stampa_vet(numeri, len);
}
