#include<stdio.h>

int main(){
	int n;
	printf("n = ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	int left = 0, right = n - 1;
	int check = 1;
	while(left < right){
		if (arr[left] != arr[right]){
			check = 0;
			break;
		}
		left++; right--;
	}	
	printf("\nOUTPUT:\n%d", check);
	return 0;
}