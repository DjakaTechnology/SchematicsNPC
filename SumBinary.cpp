#include <stdio.h>
#include <string>
#include <bitset>

int main(){
	long a, b;
	std::string binA, binB, result ="";
	scanf("%ld %ld", &a, &b);
	binA = std::bitset<32>(a).to_string();
	binB = std::bitset<32>(b).to_string();
	
	for(int i = 0;i < binA.length();i++){
		result += binA.at(i) == binB.at(i) ? "0" : "1";
	}
	
	printf("%ld\n", std::bitset<32>(result).to_ulong());

	return 0;
}
