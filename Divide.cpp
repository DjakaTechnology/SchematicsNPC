#include <stdio.h>

int main(){
	int a, b;
	scanf("%i %i", &a,&b);
	printf("%i %shabis dibagi %i\n", a, a%b == 0? "" : "tidak ", b);
	return 0;
}
