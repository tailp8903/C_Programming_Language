#include<stdio.h>
#include<math.h>

int F1(int n){
	if (n == 1) return 1;
	return n * F1(n-1);
}

int F2(int n){
	return n * (n+1) / 2;
}

int power(int n, int m){
	if (m == 0) return 1;
	return n * pow(n, m-1);
}

int main(){
	int n, m;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("F1(n) = %d\n", F1(n));
	printf("F2(n) = %d\n", F2(n));
	printf("Enter m: ");
	scanf("%d", &m);
	printf("Result: %d", power(n, m));
	return 0;
}