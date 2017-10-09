/*
 ============================================================================
 Name        : CntPrim1.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Cntprim in C, Ansi-style
 ============================================================================

 Tha xrhsimopoihsoume to koskino tou Eratostheni (Eratoshenis' sieve) to opoio einai apo tous pio grhgorous algorithmous gia euresh prwtwn. Polu aplos, polu grhgoros.
 *
 * Logiki: Metraw tous mi prwtous, svinw ola ta pollaplasia arithmwn apo to 2 mexri to riza N
 *
 *  Xrisimopoiw pinaka gia na mi diplometraw
 *
 *  Stin Pazcal uparxei sunarthsh sqrt.
 *
 * Complexity: O(nlog(logn))
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int number, i, k, counter;

	scanf("%d", &number);

	int arr[number];
	//Arxikopoiw ton pinaka
	for (i = 1; i <= number; i++)
		arr[i] = 0;

	arr[2] = 2;
	//Vazw kathe stoixeio ston pinaka (oxi ta pol/sia tou 2)
	for (i = 3; i <= number; i = i + 2)
		arr[i] = i;

	//Psaxnw se olous tous arithmous mexri ro sqrt(n)
	for (i = 3; i < sqrt(number); i = i + 2) {

		//An einai prwtos svhnw ta pol/sia tou
		if (arr[i] != 0) {
			k = 2;
			//Ola ta pol/sia mikrotera tou n
			while (k * i <= number) {
				arr[i * k] = 0;
				k++;
			}

		}
	}
	counter = 0;

	//Metraw ta mi prwta stoixeia , diladi ta mi midenika
	for (i = 2; i <= number; i++) {
		if (arr[i] != 0)
			counter++;
	}
	printf("%d\n", counter);

	return EXIT_SUCCESS;
}
