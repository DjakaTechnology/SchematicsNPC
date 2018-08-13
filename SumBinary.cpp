#include <stdio.h>
#include <string>
#include <bitset>

int main(){
	long a, b;
	scanf("%ld %ld", &a, &b);
	
	printf("%ld\n", a ^ b);

	return 0;
}
