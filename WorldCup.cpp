#include <stdio.h>
#include <stdlib.h>

int main(){
	long p, k, n;
	scanf("%ld %ld %ld", &p, &k, &n);
	long result = abs(((p + k) / n * n) - (p + k));
	printf("%ld\n", (result == 0 ? p + k : result));
	return 0;
}
