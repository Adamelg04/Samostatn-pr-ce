#include <stdio.h>
#include <math.h>

int soucet_S(cislo)
{
	int soucetS = 0;
	for (int i = 0; i <= cislo; i+= 2) {
		soucetS += i;
	}
	return soucetS;
}

int main() {
	printf("Soucet sudych cisel je: %d\n", soucet_S(14));
}

