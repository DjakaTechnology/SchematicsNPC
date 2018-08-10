#include <stdio.h>
#include <string>
#include <sstream>

int main(){
	int a, temp1 = 0, temp2 = 1;
	std::string result = "0 1";
	scanf("%i", &a);
	
	for(int i = 1;i < a - 1;i++){
		int temp = temp1 + temp2;
		temp1 = temp2;
		temp2 = temp;
		result += " "+std::to_string(temp);
	}
	
	printf("%s\n", result.c_str());
	return 0;
}
