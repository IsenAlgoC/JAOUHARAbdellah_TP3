#include<stdio.h>
#include<stdlib.h>

int main() {
	int N = 2868838400;
	printf("Le nombre necessite %d octets\n", sizeof(N));
	printf("Le nombre est represente sur %d bits\n", (sizeof(N) * 8));
	for (int i = 0; i < 32; i++) {
		if ((N & 1) == 1) {
			printf("bit %d : ON\n ", i + 1);
		}
		else {
			printf("bit %d : OFF\n", i + 1);
		}
		N = N >> 1;
	}
	printf("Bye!");
}