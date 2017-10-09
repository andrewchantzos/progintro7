/*
 ============================================================================
 Name        : sumofpow.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : SumofPow in C, Ansi-style
 ============================================================================

 Auti i askisi mporei na luthei me arketous tropous, edw tha kanoume kati "mpakaliko"

 Gnwrizoume oti to 2^35, 3^20, 5^14 ksepernanai to orio 2.000.000.000 ya to n

 Gia na min upologizei to programma ksana kai ksana tis dunameis tha kanoume pinakes
 gia kathe dunami.

 Tha metrisoume gia tous sunduasmous twn dunamewn tous arithmous, xrhsimopoiwntas 3 while

 Se kathe mia tsekarw an to athroisma ksepernaei to N gia na allaksei epipedo i na stamatisei

 Tha xreiastoume pinaka ya na mi diplometrame px(5^0 +3^0 + 2^2 = 5^0 + 3^1 +2^1 = 6)

 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

	int i, j, k, counter = 0;


	//Xrisimopoiw long gia na min exw themata me to megethos twn akeraiwn
	long number, two[36], three[21], five[15];

	//Diavazw (ld gia long int)
	scanf("%ld", &number);

	//Ftiaxnw ton pinaka
	long arr[number];

	//Arxikopoiw ton pinaka
	for (i = 1; i < number; i++)
		arr[i] = i;


	//Ftiaxnw tous pinakes mou
	for(i = 0; i < 36; i++)
		two[i] = pow(2,i);

	for(i = 0; i < 21; i++)
			three[i] = pow(3,i);

	for(i = 0; i < 15; i++)
			five[i] = pow(5,i);

	i = 0;

	//Treis while psaxnoume olous tous dunatous sunduasmous (2^, 3^, 5^) kai mhdenizoume ston pinaka gia na metrisoume meta
	while(five[i] <= number) {
		j = 0;

		while (three[j] + five[i] <= number) {
			k = 0;

			while (two[k] + three[j] + five[i] <= number) {

				//Vazw ton sunduasmo 0 ya na mporw na ton metrisw meta
				arr[two[k] + three[j] + five[i]] = 0;
				k++;
			}
			j++;
		}
		i++;
	}

	for (i = 1; i <= number; i++) {
		if (arr[i] == 0)
			counter++;
	}

	printf("%d\n", counter);

	return EXIT_SUCCESS;
}
