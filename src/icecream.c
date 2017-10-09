/*
 ============================================================================
 Name        : icecream.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : icecream in C, Ansi-style
 ============================================================================

 O pagwtatzis mporei na poulhseis se paidia pou vriskontai [-k, +k] apostasi.
 Diladi exei ena euros 2k.

 Emeis tha metrhsoume sto euros 2k poios einai o megistos arithmos paidiwn.

 Tha valoume 2 deiktes auti ti fora o enas mprosta apo ton allon. Oso vriskoume
 paidia me to mprostino deikth sto euros tou pagwtatzi (apostasi prwtou-teleutaiou paidiou) tha auksanoume
 to mprostino deikti. Molis vgei kapoio paidi ektos eurous tha proxwrhsoume ton pisw deikti.

 Tha metrame apo auta to max. Teleiwnontas tin epanalhpsh, tha exoume perasei ola ta 2*k pou tha mporouse
 na dialeksei o pagwtatzis (diladi ekei pou exei paidia) kai tha exoume vrei to megisto arithmo paidiwn.

 De xreiazetai na vroume ti thesi tou pagwtatzi, an kai tha mporousame polu eukola.

 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, max = 0, dist, i, first, last, counter = 1;

	//O counter metraei posa paidia mporei na eksuphrethsei o pagwtatzis sto shmeio pou vriskomaste
	//Ksekinaei apo 1 giati sigoura mporei na dwsei pagwto se 1 apo ta 2 prwta paidia
	scanf("%d %d", &number, &dist);

	int arr[number];

	for (i = 0; i < number; i++) {
		scanf("%d", &arr[i]);
	}

	//Ksekiname apo to 1o kai to 2o paidi (0, 1 epeidh o pinakas ksekinaei apto 0)
	first = 1;
	last = 0;

	//Mexri na ftasoume kai sto teleutaio
	while (first < number) {

		if ((arr[first] - arr[last]) <= 2 * dist) {
			first++; //Phgainoume sto epomeno
			counter++; //Vrhkame paidi sto euros pou exoume auth th stigmh
		}
		else {
			last++; //To teleutaio paidi den einai pia sto euros mas opote prepei na proxwrhsoume (to exoume metrhsei hdh)
			counter--; // - 1 paidi
		}
		//Vlepoume an exoume pio polla paidia apo prin kai to vazoume sto max
		if (max < counter)
			max = counter;

	}

	printf("%d\n", max);

	return EXIT_SUCCESS;
}
