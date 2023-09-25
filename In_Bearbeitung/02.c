#include <stdio.h>

int main() {
	int iZahl = 0;
	int iZahl2 = 0;
	int iZahlIstPrime = 0;
	
	for (iZahl=2;iZahl<21;iZahl++){
		for (iZahl2=2;iZahl2<iZahl;iZahl2++){
			if (iZahl%iZahl2==0){
				iZahlIstPrime = 1;
			}
		}
		if (iZahlIstPrime==0){ 
		printf("Die Zahl %i ist eine Primzahl\n", iZahl);
		}
	}
	return 0;
}