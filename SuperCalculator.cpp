#include <stdio.h>
#include <vector>
#include <algorithm>

int main(){
	std::vector<long>data;
	long result = 0, lastOp;
	
	do{
		long num;
		scanf("%ld", &lastOp);
		if(lastOp != -1){
			if(lastOp != 6)
				scanf("%ld", &num);
		}else{
			break;
		}
		switch(lastOp){
			case 1:
				result += num;
				break;
			case 2:
				result -= num;
				break;
			case 3:
				result *= num;
				break;
			case 4:
				result /= num;
				break;
			case 5:
				result %= num;
				break;
			case 6:
				result = 0;
				break;
			default:
				break;
		}
		
		data.push_back(result);
	}while(lastOp != -1);
	
	std::for_each(data.begin(), data.end(), [](long i){
		printf("   %ld\n", i);
	});
	
	return 0;
}
