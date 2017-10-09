/*
 ============================================================================
 Name        : skating.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Skating in C, Ansi-style
 ============================================================================

 Opws kai sto maxsum, ena provlhma me polu eukolh lush.

 An exei dei kai lusei kapoios ena apo ta duo mporei polu eukola na lusei to allo.
 Ta provlhmata einai idia.

 Kai pali den einai toso profanhs h lush.

 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i, sum = 0, inp;

	scanf("%d", &number);

	for (i = 0; i < number; i++) {
		scanf("%d", &inp);

		sum += inp; //sum = sum + a

		if (sum < 0)
			sum = 0;
	}

	printf("%d\n", sum);

	return EXIT_SUCCESS;
}
