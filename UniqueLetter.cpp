#include <stdio.h>
#include <stdlib.h>

int main(){
	int a;
	char c;
	scanf("%i %c", &a, &c);
	printf("Bilangan %d menandakan huruf %c.\nHuruf %c memiliki nilai ASCII %d.\n", a, a + 96, c, c);

	return 0;
}
