#include <stdio.h>
#include <stdlib.h>

void Menu1_generation(int* arr, int row);
void Menu2_transpose(int* arr, int row);
void Menu3_rotation(int* arr, int row, int degree);
void Menu4_inverse(int* arr, int row);
void Menu5_calculation(int* arr, int row, char operator);

int main() {
    int inputNum;
    int row;
    int randomInt;
    int arrExist = 0;
    int inputDegree
    char inputOp;
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
            printf("X = ");
            Menu1_generation(arr1, row);
            printf("Y = ");
            Menu1_generation(arr2, row);
            arrExist = 1;
        }
        else if (inputNum == 2) {
            if (arrExist == 1) {
                printf("Transpose X and Y\n");
                printf("X^T = ");
                Menu2_transpose(arr1, row);
                printf("Y^T = ");
                Menu2_transpose(arr2, row);
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 3) {
            if (arrExist == 1) {
                printf("Input the degree to rotate: ");
                sacnf(" %d", &degree);
                Menu3_rotation(arr1, row, inputDegree);
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

void Menu1_generation(int* arr, int row) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            arr[row*i+j] = rand() % 100;
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", arr[row*i+j])
        }
        printf("\n     ");
    }
}

void Menu2_transpose(int* arr, int row) {
    int i, j;
    int localArr[row][row];
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            localArr[i][j] = arr[row*j+i];
        }
    }
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ",localArr[row*i+j]);
        }
        printf("\n       ");
    }
}

void Menu3_rotation(int* arr, int row, int degree) {
    
}

void Menu4_inverse(int* arr, int row) {

}

void Menu5_calculation(int* arr, int row, char operator) {
    if (operator == '+') {
    }
}
