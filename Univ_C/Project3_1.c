#include <stdio.h>
#include <stdlib.h>

void Menu1_generation_2(int (*arr)[2]);
void Menu1_generation_3(int (*arr)[3]);
void Menu2_transpose(void);

int main() {
	int i, j;
    int inputNum;
    int row;
    int randomInt;
    int arrExist = 0;
    srand((int)time(NULL));
    
    while(1) {
        printf("-- Menu --\n");
        printf("1. Random Square Matrix Generation\n");
        printf("2. Transpose (T)\n");
        printf("3. Rotation (90, 180, 270, 360)\n");
        printf("4. Inverse (^-1)\n");
        printf("5. Calculation (+, -, *)\n");
        printf("6. Exit\n");
        printf("Choose the item you want: ");
        scanf(" %d", &inputNum);
        if (inputNum == 1) {
        	printf("Input the number of rows (2 or 3): ");
        	scanf(" %d", &row);
        	int arr1[row][row];
        	int arr2[row][row];
        	if (row == 2) {
        		printf("\nX = ");
        		Menu1_generation_2(arr1);
        		printf("Y = ");
        		Menu1_generation_2(arr2);
			}
			else if (row == 3) {
				printf("\nX = ");
				Menu1_generation_3(arr1);
				printf("Y = ");
				Menu1_generation_3(arr2);
			}
        	arrExist = 1;
		}
		else if (inputNum == 2) {
			if (arrExist == 1) {
				
			}
			else {
				printf("Error: Random Square Matrix Not Ready\n");
			}
		}
		else if (inputNum == 3) {
			if (arrExist == 1) {
				
			}
			else {
				printf("Error: Random Square Matrix Not Ready\n");
			}
		}
		else if (inputNum == 4) {
			if (arrExist == 1) {
				
			}
			else {
				printf("Error: Random Square Matrix Not Ready\n");
			}
		}
		else if (inputNum == 5) {
			if (arrExist == 1) {
				
			}
			else {
				printf("Error: Random Square Matrix Not Ready\n");
			}
		}
		else if (inputNum == 6) {
			printf("Exit, thank you");
			break;
		}
    }
}

void Menu1_generation_2(int (*arr)[2]) {
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			arr[i][j] = rand() % 100;
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n    ");
	}
	printf("\n");
}

void Menu1_generation_3(int (*arr)[3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			arr[i][j] = rand() % 100;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n    ");
	}
	printf("\n");
}

void Menu2_transpose_2(void) {
	
}
