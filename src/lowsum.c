/*
 ============================================================================
 Name        : lowsum.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Lowsum in C, Ansi-style
 ============================================================================

 To provlhma einai sxetika eukolo.

 Vazoume 2 deiktes first, last enan stin arxi kai enan sto telos.
 Afou einai sorted, an to temp mas einai thetiko meiwnoume, phgainontas aristera,
 an einai arnhtiko auksanoume phgainontas deksia.

 Kratame to min se kathe epanalhpsh kai vlepoume an allazei

 Complexity: O(n)
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	//Thetw to min etsi giati dn uparxei MIN i MAX sti C, mporeite na valete apla enan megalo arithmo
	//i na arxikopoihsete prin tin while
	int number, i, first, last, temp, min = pow(10,9);

	scanf("%d", &number);

	int arr[number];

	for (i = 0; i < number; i++) {
		scanf("%d", &arr[i]);
	}

	first = 0;
	last = number - 1;
	//Mia while pou lunoume to provlima
	while (first < last) {
		temp = arr[first] + arr[last];
		//Vlepoume an exoume mikrotero min
		if (abs(temp) < abs(min))
			min = temp;
		if (temp > 0)
			last--; //last = last - 1
		else if (temp < 0)
			first++;
		else //Exoume 0 opote teleiwsame
			break;
	}
	printf("%d\n", min);


	return EXIT_SUCCESS;
}
