#include<stdio.h>

int a, b, c;

void nhapso(){
	scanf("%d %d %d", &a, &b, &c);
}

int max(int a, int b, int c){
	return a > (b > c ? b : c) ? a : (b > c ? b : c);
}

int main(){
	nhapso();
	printf("The max number is %d\n", max(a, b, c));

	return 0;
}