/*
 ============================================================================
 Name        : sumx.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : sumx in C, Ansi-style
 ============================================================================

 Idea: Tha dhmiourghsw enan pinaka alhtheias check[] pou tha deixnei an ya ton deikti i uparxei to stoixeio ston pinaka i oxi.
 Dhladh an uparxei to 3 tote check[3] = 1, alliws check[3] = 0;

 Etsi mporoume na vroume polu eukola an uparxoun zeugaria checkarwntas an uparxoun ta check[i] AND check[sum-i].

 Diairw oti vrw me to 2 giati exw metrisei 2 fores to kathe zeugari

 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, sum, i, counter = 0;
	scanf("%d %d", &number, &sum);

	int arr[number];

	for(i = 0; i < number; i++) {
		scanf("%d", &arr[i]);
	}
	//O pinakas xreiazetai sum stoixeia, de me noiazoun ta stoixeia > sum (exoume mono fusikous)
	int check[sum];
	//Arxikopoiw ton pinaka check
	for (i = 0; i < sum; i++) {
		check[i] = 0;
	}
	//Vazw ston check to kathe stoixeio tou pinaka
	for(i = 0; i < number; i++) {
		if (arr[i] < sum)
			check[arr[i]] = 1;
	}
	// Vlepw an uparxei to check[i] lao tp check[sum-i]
	for(i = 0; i <= sum; i++) {
		if (check[i] == 1 && check[sum - i] == 1)
			counter++;
	}
	//Diairw me to 2 to apotelesma
	printf("%d\n", counter/2);

	return EXIT_SUCCESS;
}
