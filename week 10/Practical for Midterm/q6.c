#include<stdio.h>
#include<string.h>

int compare_string(char a[], char b[]){
	if (strlen(a) != strlen(b)) return strlen(a) > strlen(b);
	else{
		for (int i = 0; i < strlen(a); i++){
			if (a[i] != b[i]) return a[i] > b[i];
		}
	}
}

int main(){
	char arr[5][100];
	for (int i = 0; i < 5; i++){
		scanf("%s", arr[i]);
	}
	int order[5] = {0, 1, 2, 3, 4};
	for (int i = 0; i < 4; i++){
		for (int j = i + 1; j < 5; j++){
			if (compare_string(arr[order[i]], arr[order[j]])){
				int temp = order[i];
				order[i] = order[j];
				order[j] = temp;
			}
		}
	}
	printf("\nOUTPUT:\n");
	for (int i = 0; i < 5; i++){
		printf("%s ", arr[order[i]]);
	}

	return 0;
}