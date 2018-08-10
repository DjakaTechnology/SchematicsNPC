#include <stdio.h>

int main (){
	int a;
	scanf("%i", &a);
	printf("Bilangan %s-%s\n", a%2==0 ? "genap" : "ganjil", (a / 2) % 2 == 0 ? "genap":"ganjil");
}
