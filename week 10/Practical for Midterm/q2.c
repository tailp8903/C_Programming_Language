#include<stdio.h>

int main(){
	int n;
	do{
		printf("Enter n (n >= 4): ");
		scanf("%d", &n);
	}while (n < 4);

	int sum = 0;
	if (n % 2 == 0){
		sum += 3 * n - 6;
	}
	else sum += 3 * n - 9;
	printf("%d", sum);

	return 0; 
}