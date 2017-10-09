/*
 ============================================================================
 Name        : sumint.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : SumInt in C, Ansi-style
 ============================================================================

 Ftiaxnoume ena array athroismatwn, prosoxh, vazoume san prwto stoixeio to ston pinaka athroismatwn to 0.

 Meta xrhsimopoioume 2 deiktes ton fPointer pou deixnei mprosta kai ton sPointer pou deixnei pisw.
 An i diafora twn stoixeiwn tou sumArr pou deixnoun oi 2 pointers einai mikroteri i ish tou K, tote uparxoun (fPointer-sPointer) sunduasmoi gia na prosthesoume sto sunolo.
 Oso i diafora einai <= K proxwrame ton fPointer, diaforetika ton sPointer.

 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int N, K, i, fPointer = 1, sPointer = 0;
    long long res = 0;
    scanf("%d %d", &N, &K);

    int arr[N];
    long long sumArr[N + 1];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Arxikopoihsh
    for (i = 0; i < N + 1; i++) {
        sumArr[i] = 0;
    }

    sumArr[0] = 0;
    for (i = 1; i < N + 1; i++) {
        sumArr[i] = sumArr[i-1] + arr[i - 1];
    }


    while (fPointer <= N) {
        if (sumArr[fPointer] - sumArr[sPointer] <= K) {
            res += fPointer - sPointer;
            fPointer++;
        }
        else {
            if (fPointer == sPointer + 1)
                fPointer++;
            else
                sPointer++;
        }
    }

    printf("%lld\n", res);
    return EXIT_SUCCESS;
}
