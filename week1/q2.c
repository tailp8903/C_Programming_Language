#include<stdio.h>
#include<math.h>

int fun(int n){
	for (int i = 2; i <= sqrt(n); i++){
		if (n % i == 0) return 0;
	}
	return n > 1;
}

int foo(int c){
	float n = sqrt(2.0 * (float)c + 1.0/4.0) - 1.0/2.0;
	return (int)n;
}

int main(){
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("fun(%d) = %d\n", n, fun(n));
	int c;
	printf("Enter c: ");
	scanf("%d", &c);
	printf("foo(%d) = %d\n", c, foo(c));
	return 0;
}