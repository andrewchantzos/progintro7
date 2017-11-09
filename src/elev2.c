/*
 ============================================================================
 Name        : elev2.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Elev2 in C, Ansi-style
 ============================================================================
 Arxika kanoume sort ton pinaka pou mas dinetai. O pio grhgoros algorithmos sugritikou sort mas dinei O(nlogn).
 Mporoume na dialeksoume anamesa se quicksort kai mergesort.

 Meta prospathoume na topothethsoume sto asanser ton pio varu me ton pio elafru wste na ftiaksoume oso dunaton perissotera zeugaria.
 An o pio varus me ton pio elafru xwrane sto asanser kouname tous 2 pointers kai tous "vazoume" sto asanser.
 Diaforetika, o pio varus de mporei na paei me kapoion sto asanser, opote mpainei monos tou kai kouname pros ta aristera ton diko tou pointer.

 Complexity: O(nlogn)
 */

#include <stdio.h>
#include <stdlib.h>


void quick_sort (int *a, int n) {
    int i, j, p, t;
    if (n < 2)
        return;
    p = a[n / 2];
    for (i = 0, j = n - 1;; i++, j--) {
        while (a[i] < p)
            i++;
        while (p < a[j])
            j--;
        if (i >= j)
            break;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    quick_sort(a, i);
    quick_sort(a + i, n - i);
}

int main(void) {

    long size, weight, i, times = 0;

    scanf("%ld", &size);
    scanf("%ld", &weight);

    long arr[size];

    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, size);

    long f_pointer = 0;
    long l_pointer = size - 1;

    while (f_pointer <= l_pointer) {
        if ( arr[f_pointer] + arr[l_pointer] <= weight ) {
            times++;
            f_pointer++;
            l_pointer--;
        }
        else {
            times++;
            l_pointer--;
        }
    }

    printf("%ld\n", times);
    return EXIT_SUCCESS;
}
