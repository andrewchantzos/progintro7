/*
 ============================================================================
 Name        : swaps.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Swaps in C, Ansi-style
 ============================================================================

 Oson afora to prwto kai ton teleutaio arithmo tis akolouthias, o prwtos
 tha einai o prwtos arnhtikos pou tha vroume kai o teleutaios, o teleutaios
 thetikos pou tha vroume.

 Gia na metrisoume tis antimetatheseis, tha kanoume enan pinaka neg[],
 opou tha vazoume ti thesi tou niostou arnhtikou stin akolouthia. (Tha metrame apo to 1, oxi to 0)

 Oi antimetatheseis pou tha xreiastei mexri na ftasei sti teliki tou thesi tha einai
 o arithmos twn thetikwn pou uparxoun prin apo auton, diladi neg[i] - i

 Complexity O(n)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i, left, number, right, negCounter, sum = 0;

	scanf("%d", &number);

	int input[number], neg[number];

	for (i = 0; i < number; i++) {

		scanf("%d", &input[i]);
	}
	//Metrhths ya tous arnhtikous
	negCounter = 0;

	for (i = 0; i < number; i++) {
		if (input[i] < 0) {
			if (negCounter == 0)
				//Vrika to left
				left = input[i];
			negCounter++;

			//Deixnei posoi thetikoi uparxoun prin apo auton, diladi poses antimetatheseis
			neg[negCounter] = i + 1 - negCounter;

		}
		//Gia thetiko allazw mono to right
		else
			right = input[i];
	}
	//Vriskw tis antimetatheseis
	for (i = 1; i <= negCounter; i ++)
		sum =sum + neg[i];

	printf("%d\n%d\n%d\n", sum, left, right);


	return EXIT_SUCCESS;
}
