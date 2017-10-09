/*
 ============================================================================
 Name        : maxsum.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Maxsum in C, Ansi-style
 ============================================================================

 Oso to athroisma mas einai thetiko sunexizoume kai kratame se kathe epanalhpsh to max.

 An ginei arnhtiko ksanaksekiname apo to 0.

 Parolo pou i lush einai polu aplh, den einai profanhs, oute toso eukolo na th skefteis.

 Complexity O(n)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, sum, i, max = -1000;

	scanf("%d", &number);

	int arr[number];

	for (i = 0; i < number; i++) {
		scanf("%d", &arr[i]);

		sum += arr[i]; //sum = sum + arr[i]
		//An pesei apto 0 to sum mas ksanaksekiname
		if (sum < 0)
			sum = 0;
		//Kratame to max
		if (sum > max)
			max = sum;
	}
	printf("%d\n", max);

	return EXIT_SUCCESS;
}
