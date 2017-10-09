/*
 ============================================================================
 Name        : CityCirc.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : Citycircle in C, Ansi-style
 ============================================================================
 Lunoume to provlhma grammika se O(n).

 Mono oi thetikoi arithmoi mporoun na einai luseis opote tsekaroume mono autous.
 An ginei to athroisma arnhtiko tote den einai autos o arithmos lush kai psaxnoume ton epomeno thetiko na ksekinhsoume
 To flag deixnei an exoume pithani lush se ekeino to shmeio.

 Xrhsimopoiw 2 metavlhtes to sum pou deixnei to athroisma twn stoixeiwn mexri ekei
 kai to temp pou deixnei to athroisma twn stoixeiwn mexri kai prin tin pithani lush.

 An (sum-temp<0) tote apo tin pithani lush mas exoume ftasei se arnhtiko athroisma kai prepei na paroume tn epomeni

 Epeidi sti C oi pinakes metrane apto 0 prepei sto result na prosthesw 1.

 To provlhma lunetai polu grhgora kai vazontas 2 epanalhpseis, kovontas me break polles apo tis prakseis.

 Algorithmika auto einai pio grhgoro pou exei mia for mono.

 Complexity O(n)


 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i, flag, sum, temp, result;

	scanf("%d", &number);

	int arr[number];

	//Diavazw
	for(i = 0; i < number; i++)
		scanf("%d", &arr[i]);
	 //Th xrhsimopoiw san boolean (0=false, 1=true)
	flag = 0;
	sum = 0;


	//Se auth th for lunoume to provlhma
	for(i = 0; i < number; i++) {
		sum += arr[i]; //einai sum = sum + A[i]

		//Tsekarw an einai pithani lush. An einai thetw tis metavlhtes mou katallhla
		if (flag == 0 && arr[i] >= 0) {
			 //Prosthetw 1 giati sti C oi pinakes ksekinoun apo 0
			result = i + 1;
			 //Athroisma mexri kai prin to stoixeio A[i]
			temp = sum - arr[i];
			flag = 1;
		}

		//An einai arnhtiko akurh h lush
		if (sum - temp < 0) {
			result = 0;
			flag = 0;
		}
	}
	if (sum < 0)
		result = 0;


	printf("%d\n", result);

	return EXIT_SUCCESS;
}
