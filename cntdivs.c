/*
 ============================================================================
 Name        : cntdivs.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Cntdivs in C, Ansi-style
 ============================================================================

 H ulopoihsh tha moiazei arketa me to koskino tou eratostheni.
 Auth ti fora tha metrisoume tous arithmous pros tou opoious o n den einai prwtos

 H lush moiazei polu me ti Cntprim
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i, counter, k;

	//diavazw tin eisodo
	scanf("%d", &number);

	int arr[number];
	//Arxikopoiw ton pinaka
	for (i = 2; i <= number; i++)
		arr[i] = i;

	for (i = 2; i <= number; i++) {
		//Tsekarw an dn ton exw metrisei kai an einai diairetis
		if (arr[i] != 0 && number % arr[i] == 0) {
			k = 1;
			while (k * i <= number) {
				arr[k * i] = 0;
				k++;
			}
		}
	}
	counter = 0;

	for (i = 2; i <= number; i++) {
		if (arr[i] == 0)
			counter++;
	}
	printf("%d\n", counter);

	return EXIT_SUCCESS;
}
