/*
 ============================================================================
 Name        : share.c
 Author      : andreas
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Share in C, Ansi-style
 ============================================================================
 Ena polu duskolo provlhma an den exei dei kapoios kati paromoio
 Se genikes grammes ta provlhmata pou zhtane to min tou max kai to antistrofo
 lunontai grhgora me duadikh anazhthsh.

 Complexity: O(nlogn): log(athroisma stoixeiwn tou pinaka) ya tin akriveia

 Auto to provlhma einai antistoixo me to painter's partition problem
 Dinetai polu kaluterh ekshghsh ths lushs apo auth pou mporw na dwsw
 */

#include <stdio.h>
#include <stdlib.h>

int getMax(int array[], int size) {
	int i = 0;
	int max = array[0];
	for (i = 0; i < size; i++)
		if (max < array[i])
			max = array[i];
	return max;
}

int getMin(int array[], int size) {
	int i = 0;
	int min = array[0];
	for (i = 0; i < size; i++)
		if (min < array[i])
			min = array[i];
	return min;
}

int getParts(int array[], int size, int checkValue) {
	int shares = 1;
	int i;
	int tmpSum = 0;
	for (i = 0; i < size; i++) {
		tmpSum += array[i];
		if (tmpSum > checkValue) {
			tmpSum = array[i];;
			shares++;
		}

	}
	return shares;
}

int main(void) {
	int i, N, parts;
	// parts = 3 giati thelw na to spasw se 3 kommatia
	parts = 3;

	// Read input
	scanf("%d", &N);
	int arr[N];
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);

	// Orizw ta bounds tou binary search. Den einai aparaithto na valw toso
	// Prepei omws na eimai sigouros oti h lush pou psaxnw tha einai panta anamesa
	int lo = getMin(arr, N);
	int hi = getMax(arr, N)*N;

	// binary search
	while (lo < hi) {
		int mid = (lo + hi)/2;
		int shares = getParts(arr, N, mid);
		if (shares <= parts) {
			hi = mid;
		}
		else {
			lo = mid + 1;
		}

	}

	printf("%d\n", lo);


	return EXIT_SUCCESS;
}
