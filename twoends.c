/*
 ============================================================================
 Name        : twoends.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Twoends in C, Ansi-style
 ============================================================================

 Kai auto to provlhma lunetai me 2 deiktes first, last.

 Elegxoume poio athroisma einai megalutero kathe fora kai auksanoume to allo.
 Checkaroume panta ya na allaksoume to result se periptwsi isothtas.

 Genika polla apo auta provlhmata lunontai me 2 deiktes.

 Complexity: O(n)

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int first, last, i, number, result = 0, sumX, sumY;

	scanf("%d", &number);

	int arr[number];

	for (i = 0; i < number; i++) {
		 scanf("%d", &arr[i]);
	}

	//Arxikopoihseis
	first = 0;
	last = number - 1;
	sumX = arr[first];
	sumY = arr[last];

	while (first < last) {
		if (sumX == sumY)
			result = sumX;
		//Zhteitai o megistos ya auto vazoume kai iso
		if (sumX <= sumY) {
			first++;
			sumX += arr[first]; //sum = sum + arr[first]
		}
		else {
			last--;
			sumY += arr[last];
		}
	}

	printf("%d\n", result);
	return EXIT_SUCCESS;
}
