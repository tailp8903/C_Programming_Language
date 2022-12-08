#include<stdio.h>

int main(){
	float x;
	scanf("%.1f", &x);
	if (x >= 0.0 && x <= 3.9) printf("F");
	else if ( x <= 4.9) printf("D");
	else if (x <= 5.4) printf("D+");
	else if (x <= 6.4) printf("C");
	else if (x <= 6.9) printf("C+");
	else if (x <= 7.9) printf("B");
	else if (x <= 8.4) printf("B+");
	else if (x <= 9.4) printf("A");
	else if (x <= 10) printf("A+");

	return 0;
}