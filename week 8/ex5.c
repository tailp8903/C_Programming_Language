#include<stdio.h>

int main(){
	float h, w;
	scanf("%f %f", &h, &w);
	printf("The area = %.2f\n", h * w);
	printf("The perimeter = %.2f", 2 *(h + w));

	return 0;
}