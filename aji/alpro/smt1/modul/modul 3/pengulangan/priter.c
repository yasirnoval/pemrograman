#include <stdio.h>
#include <stdlib.h>

// Baca N, 
// Print i = 1 s/d N dengan ITERATE

int main(){
	
	//KAMUS
	int N;
	int i;
	
	//ALGORITMA
	printf("Nilai N > 0 = "); /*inisialisasi*/
	scanf("%d", &N);
	i = 1; /*First Elmt*/
	printf("Print i dengan ITERATE: \n"); 
	for(;;)
	
	{
	printf("%d \n", i); /*proses*/
	if(i == N) /*kondisi berhenti*/
	break;
	else
	{
	i++; /*Next Elmt*/
	} /* (i == N) */
	
	return 0;
	}
}
