/*
 ============================================================================
 Name        : max2sum.c
 Author      : Andreas Chantzos
 Version     : 1.0
 Copyright   : Your copyright notice
 Description : max2sum , Ansi-style
 ============================================================================

 Auth h askhsh einai sxetika duskoli, giati to teleutaio input einai toso megalo pou de xwraei se pinaka.
 Opote prepei na diavazoume kai na lunoume tautoxrona xwris na apothhkeuoume.

 Xrhsimpoiw 2 temps kai mia metavlhth pointer gia na lusw tin askisi.

 Kathe fora pou diavazw ena stoixeio, vlepw me poio apo ta 2 temps exw megalutero apotelesma.

 An exw me to pisw temp (temp1) tote kounaw to mprostino temp (temp2), temp2 = input.

 An exw me to mprostino temp (temp2) tote ta temps mou tha ginoun ta 2 teleutaia stoixeia pou diavasa.

 Sto pisw temp krataw kai ti thesi tou stoixeiou (pointer) wste na mporw na metraw tin apostasi.

 Tsekarw kathe fora to max.

 Complexity O(n)

 px:  O pointer ksekinaei apto 0, exw allaksei to paradeigma tou grader ya na fainetai kai i allagh tou temp1.

 7
 6 3 9 11 2 7
 temp1    temp2    pointer   input     max
 6			3		  0		   9       10
 6          9         0        11      17
 9			11		  2        2       21
 11			2         3    	   7	   21
 11			7		  3		   -       21


 Complexity: O(n)
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int N, input, temp1, temp2, i, pointer = 0;

	scanf("%d", &N);

	int max = 0;

	//Diavazw ta prwta 2 stoixeia
	scanf("%d %d", &temp1, &temp2);
	max = temp1 + temp2 + 1;

	for (i = 2; i < N; i++) {
		scanf("%d", &input);

		//Se auti tin entoli de xreiazetai na valoume ta input, alla etsi einai pio ksekatharo ti kanei.

		if ((input + temp2 + 1) > (input + temp1 + i - pointer)) {

			//Vlepoume an exoume neo max.
			if (max < input + temp2 + 1)
				max = input + temp2 + 1;

			//Metakinoume ta stoixeia mas. Etsi sta temp1, temp2 exoume apothhkeusei ta 2 teleutaia stoixeia pou diavasame.
			temp1 = temp2;
			temp2 = input;
			pointer = i-1;
		}

		else {
			if (max < input + temp1 + i - pointer)
				max = input + temp1 + i - pointer;

			//Metakinoume to brostino temp
			temp2 = input;

		}


	}

	printf("%d\n", max);


	return 0;
}
