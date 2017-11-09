/*
 ============================================================================
 Name        : cb3.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Cb3 in C, Ansi-style
 ============================================================================

 Sigoura den einai i pio grhgorh lush, alla einai apodekti. H duadikh anazhthsh einai pio grhgorh apo thn euresh kubikhs rizas, sthn prokeimenh periptwsh!!!

 Arxika ftiaxnoume pinaka me oles tis kuvikes rizes mexri to 1000 pou tha xrhsimopoihsoume

 Gia kathe arithmo trexoume 2 for kai psaxnoume ston pinaka me ta valus an uparxei o arithmos (Inpu-values[j]-values[k]).
 An uparxei shmainei oti vrhkame apodekto athroisma kai prosthetoume 1 sto res.

 Prosoxi, oi arxikopoihseis tou mesa for kai tis duadikhs anazhthshs einai j kai k antistoixa, wste na mi diplometrame sunduasmous.

 Pithani veltiwsh: Xrhsh HashSet, stis perissoteres glwsses uparxei etoimo, sth C tha prepei na to ulopoihsoume emeis. Mas dinei search se 0(1).

 */

#include <stdio.h>
#include <stdlib.h>


// A iterative binary search function. It returns location of x in
// given array arr[l..r] if present, otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

            // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // if we reach here, then element was not present
    return -1;
}

int main(void) {

    int N, i, j, k;

    int values[1001];

    for (i = 0; i <= 1000; i++) {
        values[i] = i*i*i;
    }

    scanf("%d", &N);
    int res = 0;
    long input = 0;
    for (i = 0; i < N; i++) {
        res = 0;
        scanf("%ld", &input);
        for (j = 0; j < 1001; j++) {
            if (values[j] > input)
                break;
            for (k = j; k < 1001; k++) {
                int toSearch = input - values[j] - values[k];
                if (toSearch < 0)
                    break;
                else {
                    int binRes = binarySearch(values, k, 1000, toSearch);
                    if (binRes != -1)
                        res++;
                }
            }
        }
        printf("%d\n", res);
    }

}