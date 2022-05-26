#include <stdio.h>
#include <stdlib.h> //난수를 생성할 때 rand() 사용 

void Menu1_generation(int arr[], int row);
void printArr(int arr[], int row);
void Menu2_transpose(int arr[], int row);
void Menu3_rotation(int arr[], int row, int degree);
void Menu4_inverse(int arr[], int row, char matrixName);
void Menu5_calculation(int arr1[], int arr2[], int row, char op);

int main() {
    int inputNum; //"Choose the item you want: "을 출력한 후 사용자로부터 정수를 입력받기 위함 
    int row; //사용자로부터 배열의 길이(=가로=세로)를 입력받아 사용 
    int arr1[9]; //출력시 "X"로 표현될 배열 
    int arr2[9]; //출력시 "Y"로 표현될 배열 
    int arrExist = 0; //1번 메뉴 실행 이력을 판단하기 위함 
    int inputDegree; //3번 메뉴에서, 회전 각도를 입력받아 저장 
    char inputOp; //5번 메뉴에서, 연산 기호를 입력받음 
    srand((int)time(NULL)); //프로그램을 실행할 때마다 무작위의 난수가 생성되도록 함 

    while(1) { //사용자가 6을 입력하여 break문을 만나기 전까지 반복 
        printf("-- Menu --\n");
        printf("1. Random Square Matrix Generation\n");
        printf("2. Transpose (T)\n");
        printf("3. Rotation (90, 180, 270, 360)\n");
        printf("4. Inverse (^-1)\n");
        printf("5. Calculation (+, -, *)\n");
        printf("6. Exit\n");
        printf("Choose the item you want: ");
        scanf(" %d", &inputNum); //사용자로부터 정수를 입력받음 
        if (inputNum == 1) { //사용자가 1을 입력했을 때 
            printf("Input the number of rows (2 or 3): ");
            scanf(" %d", &row); //배열의 길이를 입력받음 
            printf("X = ");
            Menu1_generation(arr1, row); //랜덤 배열 생성, 출력하는 함수 실행 
            printf("Y = ");
            Menu1_generation(arr2, row);
            arrExist = 1; //1번 메뉴를 실행함으로써 랜덤 배열이 생성되었으므로, arrExist = 1 
        }
        else if (inputNum == 2) { //사용자가 2를 입력했을 때 
            if (arrExist == 1) { //1번 메뉴를 실행한 적이 있을 때 
                printf("Transpose X and Y\n");
                printf("X^T = ");
                Menu2_transpose(arr1, row); //전치행렬을 출력하는 함수 
                printf("Y^T = ");
                Menu2_transpose(arr2, row);
            }
            else { //1번 메뉴를 실행한 적이 없을 때 
                printf("Error: Random Square Matrix Not Ready\n\n"); //에러 메시지 출력 
            }
        }
        else if (inputNum == 3) { //사용자가 3을 입력했을 때 
            if (arrExist == 1) {
                printf("Input the degree to rotate: ");
                scanf(" %d", &inputDegree); //회전 각도를 입력받음 
                printf("X = ");
                Menu3_rotation(arr1, row, inputDegree); //회전 각도에 따라 배열을 회전, 출력하는 함수 실행 
                printf("Y = ");
                Menu3_rotation(arr2, row, inputDegree);
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 4) { //사용자가 4를 입력했을 때 
            if (arrExist == 1) {
            	Menu4_inverse(arr1, row, 'X'); //역행렬을 출력하는 함수 실행 
            	Menu4_inverse(arr2, row, 'Y');
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 5) { //사용자가 5를 입력했을 때 
            if (arrExist == 1) {
            	printf("Input the calculation (+, -, or *): ");
            	scanf(" %c", &inputOp); //연산 기호를 입력받음 
                Menu5_calculation(arr1, arr2, row, inputOp); //적절한 배열 연산을 출력하는 함수 실행 
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 6) { //사용자가 6을 입력했을 때 
            printf("Exit, thank you");
            break; //프로그램 종료 
        }
    }
}

void Menu1_generation(int arr[], int row) { //랜덤 배열을 생성, 출력하는 함수 
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            arr[row*i+j] = rand() % 100; //양의 정수를 100으로 나눈 나머지는 항상 0~99
        }
    }
    printArr(arr, row); //배열을 출력하는 함수 실행 
}

void printArr(int arr[], int row) { //배열을 출력하는 함수 
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < row; j++) {
			printf("%d ", arr[row*i+j]); //중첩 for문이 돌아가면서, arr[0]~arr[row*row-1]까지 차례대로 출력 
		}
		printf("\n    ");
	}
	printf("\n");
}

void Menu2_transpose(int arr[], int row) { //전치행렬을 출력하는 함수 
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", arr[row*j+i]); //printArr함수에서는 arr[row*i+j]를 출력했으나, 행과 열을 바꾸어 출력하기 위해 arr[row*j+i]를 출력 
        }
        printf("\n      ");
    }
    printf("\n");
}

void Menu3_rotation(int arr[], int row, int degree) { //회전 각도에 따라 배열을 회전, 출력하는 함수 
	int i, j;
	int localArr[9]; //회전시킨 배열을 저장하기 위함 
	if (degree == 90) { //회전 각도가 90일 때 (사용자가 90을 입력했을 때) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*j+(row-i-1)] = arr[row*i+j];
			}
		}
		printArr(localArr, row); //저장된 배열을 출력하는 함수 실행 
	}
	else if (degree == 180) { //회전 각도가 180일 때 (사용자가 180을 입력했을 때) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*(row-i-1)+(row-j-1)] = arr[row*i+j];
			}
		}
		printArr(localArr, row);
	}
	else if (degree == 270) { //회전 각도가 270일 때 (사용자가 270을 입력했을 때) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*(row-j-1)+i] = arr[row*i+j]; //localArr[row-j-1][i] = arr[i][j];
			}
		}
		printArr(localArr, row);
	}
	else if (degree == 360 || degree == 0) { //회전 각도가 360 또는 0일 때 (사용자가 360 또는 0을 입력했을 때) 
		printArr(arr, row);
	}
}

void Menu4_inverse(int arr[], int row, char matrixName) { //역행렬을 출력하는 프로그램 
	int a;
	if (row == 2) { //가로길이(세로길이)가 2일 때 
		a = arr[0]*arr[3]-arr[1]*arr[2]; //2*2 arr 행렬의 행렬식 
		if (a == 0) { //a가 0이면 역행렬이 존재하지 않음 
			printf("Matrix %c is not invertible\n\n", matrixName);
		}
		else { //a가 0이 아니면 역행렬이 존재하므로 출력 
			printf("%c^(-1) = %f %f\n         %f %f\n", matrixName, (float)arr[3]/a, (float)-arr[1]/a, (float)-arr[2]/a, (float)arr[0]/a);
		}
	}
	else if (row == 3) { //가로길이(세로길이)가 3일 때 
		a = arr[0] * (arr[4]*arr[8]-arr[5]*arr[7]) +
		    arr[2] * (arr[3]*arr[7]-arr[4]*arr[6]) -
			arr[1] * (arr[3]*arr[8]-arr[5]*arr[6]); //3*3 arr 행렬의 행렬식 
		if (a == 0) { //a가 0이면 역행렬이 존재하지 않음 
			printf("Matrix %c is not invertible\n\n", matrixName);
		}
		else { //a가 0이 아니면 역행렬이 존재하므로 출력 
			printf("%c", matrixName); //main()에서 문자 X 또는 Y를 출력하게 됨 
			printf("^(-1) = %f %f %f\n", (arr[4]*arr[8]-arr[7]*arr[5])/(float)a,
		    	                         (arr[2]*arr[7]-arr[1]*arr[8])/(float)a,
										 (arr[1]*arr[5]-arr[2]*arr[4])/(float)a);
			printf("         %f %f %f\n", (arr[5]*arr[6]-arr[3]*arr[8])/(float)a,
		                	              (arr[0]*arr[8]-arr[2]*arr[6])/(float)a,
										  (arr[3]*arr[2]-arr[0]*arr[5])/(float)a);
			printf("         %f %f %f\n", (arr[3]*arr[7]-arr[6]*arr[4])/(float)a,
		            	                  (arr[6]*arr[1]-arr[0]*arr[7])/(float)a,
										  (arr[0]*arr[4]-arr[3]*arr[1])/(float)a); //각각 2*2행렬의 행렬식 / arr의 행렬식 
		}
	}
}

void Menu5_calculation(int arr1[],int arr2[], int row, char op) { // 적절한 배열 연산을 출력하는 함수 
	int i, j;
	if (op == '+') { //연산 기호가 +일 때 (사용자가 +를 입력했을 때) 
		printf("X + Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]+arr2[row*i+j]); //같은 위치의 요소끼리 더한 값을 차례대로 출력 
			}
			printf("\n        ");
		}
		printf("\n");
	}
	else if (op == '-') { //연산 기호가 -일 때 (사용자가 -를 입력했을 때) 
		printf("X - Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]-arr2[row*i+j]); //같은 위치의 요소끼리 뺀 값을 차례대로 출력 
			}
			printf("\n        ");
		}
		printf("\n");
	}
	else if (op == '*') { //연산 기호가 *일 때 (사용자가 *를 입력했을 때) 
		printf("X * Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]*arr2[row*i+j]); //같은 위치의 요소끼리 곱한 값을 차례대로 출력 
			}
			printf("\n        ");
		}
		printf("\n");
	}
}
