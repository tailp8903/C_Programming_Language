#include<stdio.h>

int main(){
	printf("-------------BANG CUU CHUONG-------------\n");
	printf("========================================\n");
	int add = 1;
	int mul = 1;
	for (int i = 1; i <= 27; i++){
		for (int j = add; j <= add + 2; j++){
			printf("| %d x %d = %-2d ", j, mul, j * mul);
		}
		printf("|\n");
		mul++;	
		if (i % 9 == 0){
			printf("========================================\n");
			mul = 1;
			add += 3;
		}
	}
	return 0;
}