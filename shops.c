/*
 ============================================================================
 Name        : shops.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Shops in C, Ansi-style
 ============================================================================

 Arxika ftiaxnoume N-K athroismata diadoxikwn K-adwn
 Einai profanws oti epikaluptomenes luseis den einai autes pou theloume

 Twra exoume aplopoihsei to provlhma, sto na vroume se enan pinaka (sumArr) to megisto athroisma 2 stoixeiwn pou exoun toulaxiston K apostasi.

 Ftiaxnoume enan pinaka maxArr, opou kratame se kathe i to megisto stoixeio mexri stigmhs.
 Me ena perasma kai sunthhkh na vroume to megisto (maxArr(i-K) + sumArr(i)) me i arxikopoihmeno sto K, vriskoume auto pou theloume.

 Complexity O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int N, K, i, maxSum = 0;

    scanf("%d %d", &N, &K);

    int arr[N];
    int sumArr[N+1-K];
    int maxArr[N-K];

    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Arxikopoihsh
    for (i = 0; i < N+1-K; i++) {
        sumArr[i] = 0;
    }

    /*** Dhmiourgia K-adwn athroismatwn ***/
    for (i = 0; i < K; i++) {
        sumArr[0] += arr[i];
    }
    for (i = 1; i < N - K + 2; i++) {
        sumArr[i] = sumArr[i - 1] - arr[i - 1] + arr[i + K - 1];
    }

    /*** Dhmiourgia K-adwn athroismatwn ***/


    /*** Dhmiourgia max array **/
    maxArr[0] = sumArr[0];
    for (i = 1; i < N-K; i++) {
        if (maxArr[i-1] < sumArr[i])
            maxArr[i] = sumArr[i];
        else
            maxArr[i] = maxArr[i-1];
    }


    for (i = K; i < N - K + 1; i++) {
        int tmp = sumArr[i] + maxArr[i-K];
        if (tmp > maxSum) {
            maxSum = tmp;
        }
    }

    printf("%d\n", maxSum);

	return EXIT_SUCCESS;
}
