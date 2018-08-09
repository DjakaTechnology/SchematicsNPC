#include <stdio.h>
#include <locale>

using namespace std;
int main(){
	char a, b;
	scanf("%c %c", &a, &b);
	printf("/ %c %c \\", tolower(b), toupper(a));
	return 0;
}
