#include<stdio.h>

long long factor(long long n){
	if (n == 1) return 1;
	return n * factor(n-1);
}

int main(){
	long long n, m;
	scanf("%lld %lld", &n, &m);
	long long combi = factor(n) / (factor(m) * factor(n - m));
	printf("%lld", combi);

	return 0;
}