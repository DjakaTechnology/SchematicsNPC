#include <stdio.h>

int main(){
	long result = 0, lastOp = 0;
	
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
		
		if(lastOp != -1)
			printf("   %ld\n", result);
	}while(lastOp != -1);
	
	return 0;
}
