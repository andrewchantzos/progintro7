/*
 ============================================================================
 Name        : maxfact.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : maxfact in C, Ansi-style
 ============================================================================

 Arketa aplo provlima. Gia na to lusoume grigora kratame to ginomeno kai de to ksanaupologizoume
 gia kathe neo arithmo. Ta paragontika auksanontai toso grigora omws pou kai pali de tha uphrxe xroniko provlhma

 Complexity O(n)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i;

	scanf("%d", &n);
	//Edw tha metraw to paragontiko
	int mul = 1;

	//Metraw to paragontiko mexri na perasei to n opou stamataw
	//Vazw <= gia na pianei ta 1,2 san eisodo
	for (i = 1; i <= n; i++) {
		mul = mul * i;

		if (mul > n)
			break;
	}
	//Kanw print to i-1 kathws exei aukshthei to i
	printf("%d\n", i-1);

	return EXIT_SUCCESS;

}
