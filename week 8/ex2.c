#include<stdio.h>

int a[1000], b[1000];
int lenA = 0, lenB = 0;

void Equality(){
	if (lenA != lenB) printf("They are not equal\n");
	else{
		for (int i = 0; i <= lenA; i++){
			if (a[i] != b[i]){
				printf("They are not equal\n");
				return;
			}
		}
		printf("Two array are equal\n");
	} 
}

int main(){
	int c;
	printf("Enter the first array: ");
	while((c = getchar()) != '\n'){
		a[lenA] = c;
		lenA++;
	}
	printf("Enter the second array: ");
	while((c = getchar()) != '\n'){
		b[lenB] = c;
		lenB++;
	}
	Equality();

	return 0;
}