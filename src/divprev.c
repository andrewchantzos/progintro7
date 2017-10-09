/*
 ============================================================================
 Name        : divprev.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : divprev in C, Ansi-style
 ============================================================================

 To provlhma lunetai polu eukola me mia epanalhpsh an ksekinhsoume anapoda ston pinaka.

 Kathe arithmos prepei na diairei olous tous proigoumenous (epomenous twra pou eimaste anapoda)
 opote tsekaroume an diairei ton epomeno kathe fora, an de ton diairei tote apokleietai na einai autos lush kai
 oloi anamesa se auton kai auton pou eimaste twra pou tous diairouse, opote thewroume ton arithmo pou eimaste twra san res.


 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i, res;

	scanf("%d", &number);

	//Panta orizw ton pinaka afou diavasw to megethos tou, alliws tha vgalei error
	int arr[number];


	for (i = 0; i < number; i++) {
		 scanf("%d", &arr[i]);
	}

	//Arxikopoihsh
	res = arr[number - 1];

	//Lush
	for(i = number - 2; i >= 0; i--) {
		if (arr[i] % res != 0)
			res = arr[i];
	}


	printf("%d\n", res);

	return EXIT_SUCCESS;
}
