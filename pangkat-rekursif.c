#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pangkat(int n,int i) {
	if (i ==0){
		return 1;
	}
	else {
		return n * pangkat (n,i-1); //PENGEMBALIAN PERHITUNGAN PANGKAT
	}
	
}

main()
{
	int n,i;
	
	printf(" 					KALKULATOR PEMANGKAT\n\n\n");
	printf ("			bilangan positif yang akan dipangkatkan :");
	scanf ("%d", &n);
	printf ("			bilangan pemangkat :");
	scanf ("%d", &i);
	
	printf("			hasil dari %d^%d = %d", n,i, pangkat(n,i)); //PEMANGGILAN DARI FUNGSI REKURSIF
	
	return 0;
 } 
