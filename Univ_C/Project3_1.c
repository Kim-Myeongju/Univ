#include <stdio.h>
#include <stdlib.h> //������ ������ �� rand() ��� 

void Menu1_generation(int arr[], int row);
void printArr(int arr[], int row);
void Menu2_transpose(int arr[], int row);
void Menu3_rotation(int arr[], int row, int degree);
void Menu4_inverse(int arr[], int row, char matrixName);
void Menu5_calculation(int arr1[], int arr2[], int row, char op);

int main() {
    int inputNum; //"Choose the item you want: "�� ����� �� ����ڷκ��� ������ �Է¹ޱ� ���� 
    int row; //����ڷκ��� �迭�� ����(=����=����)�� �Է¹޾� ��� 
    int arr1[9]; //��½� "X"�� ǥ���� �迭 
    int arr2[9]; //��½� "Y"�� ǥ���� �迭 
    int arrExist = 0; //1�� �޴� ���� �̷��� �Ǵ��ϱ� ���� 
    int inputDegree; //3�� �޴�����, ȸ�� ������ �Է¹޾� ���� 
    char inputOp; //5�� �޴�����, ���� ��ȣ�� �Է¹��� 
    srand((int)time(NULL)); //���α׷��� ������ ������ �������� ������ �����ǵ��� �� 

    while(1) { //����ڰ� 6�� �Է��Ͽ� break���� ������ ������ �ݺ� 
        printf("-- Menu --\n");
        printf("1. Random Square Matrix Generation\n");
        printf("2. Transpose (T)\n");
        printf("3. Rotation (90, 180, 270, 360)\n");
        printf("4. Inverse (^-1)\n");
        printf("5. Calculation (+, -, *)\n");
        printf("6. Exit\n");
        printf("Choose the item you want: ");
        scanf(" %d", &inputNum); //����ڷκ��� ������ �Է¹��� 
        if (inputNum == 1) { //����ڰ� 1�� �Է����� �� 
            printf("Input the number of rows (2 or 3): ");
            scanf(" %d", &row); //�迭�� ���̸� �Է¹��� 
            printf("X = ");
            Menu1_generation(arr1, row); //���� �迭 ����, ����ϴ� �Լ� ���� 
            printf("Y = ");
            Menu1_generation(arr2, row);
            arrExist = 1; //1�� �޴��� ���������ν� ���� �迭�� �����Ǿ����Ƿ�, arrExist = 1 
        }
        else if (inputNum == 2) { //����ڰ� 2�� �Է����� �� 
            if (arrExist == 1) { //1�� �޴��� ������ ���� ���� �� 
                printf("Transpose X and Y\n");
                printf("X^T = ");
                Menu2_transpose(arr1, row); //��ġ����� ����ϴ� �Լ� 
                printf("Y^T = ");
                Menu2_transpose(arr2, row);
            }
            else { //1�� �޴��� ������ ���� ���� �� 
                printf("Error: Random Square Matrix Not Ready\n\n"); //���� �޽��� ��� 
            }
        }
        else if (inputNum == 3) { //����ڰ� 3�� �Է����� �� 
            if (arrExist == 1) {
                printf("Input the degree to rotate: ");
                scanf(" %d", &inputDegree); //ȸ�� ������ �Է¹��� 
                printf("X = ");
                Menu3_rotation(arr1, row, inputDegree); //ȸ�� ������ ���� �迭�� ȸ��, ����ϴ� �Լ� ���� 
                printf("Y = ");
                Menu3_rotation(arr2, row, inputDegree);
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 4) { //����ڰ� 4�� �Է����� �� 
            if (arrExist == 1) {
            	Menu4_inverse(arr1, row, 'X'); //������� ����ϴ� �Լ� ���� 
            	Menu4_inverse(arr2, row, 'Y');
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 5) { //����ڰ� 5�� �Է����� �� 
            if (arrExist == 1) {
            	printf("Input the calculation (+, -, or *): ");
            	scanf(" %c", &inputOp); //���� ��ȣ�� �Է¹��� 
                Menu5_calculation(arr1, arr2, row, inputOp); //������ �迭 ������ ����ϴ� �Լ� ���� 
            }
            else {
                printf("Error: Random Square Matrix Not Ready\n");
            }
        }
        else if (inputNum == 6) { //����ڰ� 6�� �Է����� �� 
            printf("Exit, thank you");
            break; //���α׷� ���� 
        }
    }
}

void Menu1_generation(int arr[], int row) { //���� �迭�� ����, ����ϴ� �Լ� 
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            arr[row*i+j] = rand() % 100; //���� ������ 100���� ���� �������� �׻� 0~99
        }
    }
    printArr(arr, row); //�迭�� ����ϴ� �Լ� ���� 
}

void printArr(int arr[], int row) { //�迭�� ����ϴ� �Լ� 
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < row; j++) {
			printf("%d ", arr[row*i+j]); //��ø for���� ���ư��鼭, arr[0]~arr[row*row-1]���� ���ʴ�� ��� 
		}
		printf("\n    ");
	}
	printf("\n");
}

void Menu2_transpose(int arr[], int row) { //��ġ����� ����ϴ� �Լ� 
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < row; j++) {
            printf("%d ", arr[row*j+i]); //printArr�Լ������� arr[row*i+j]�� ���������, ��� ���� �ٲپ� ����ϱ� ���� arr[row*j+i]�� ��� 
        }
        printf("\n      ");
    }
    printf("\n");
}

void Menu3_rotation(int arr[], int row, int degree) { //ȸ�� ������ ���� �迭�� ȸ��, ����ϴ� �Լ� 
	int i, j;
	int localArr[9]; //ȸ����Ų �迭�� �����ϱ� ���� 
	if (degree == 90) { //ȸ�� ������ 90�� �� (����ڰ� 90�� �Է����� ��) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*j+(row-i-1)] = arr[row*i+j];
			}
		}
		printArr(localArr, row); //����� �迭�� ����ϴ� �Լ� ���� 
	}
	else if (degree == 180) { //ȸ�� ������ 180�� �� (����ڰ� 180�� �Է����� ��) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*(row-i-1)+(row-j-1)] = arr[row*i+j];
			}
		}
		printArr(localArr, row);
	}
	else if (degree == 270) { //ȸ�� ������ 270�� �� (����ڰ� 270�� �Է����� ��) 
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				localArr[row*(row-j-1)+i] = arr[row*i+j]; //localArr[row-j-1][i] = arr[i][j];
			}
		}
		printArr(localArr, row);
	}
	else if (degree == 360 || degree == 0) { //ȸ�� ������ 360 �Ǵ� 0�� �� (����ڰ� 360 �Ǵ� 0�� �Է����� ��) 
		printArr(arr, row);
	}
}

void Menu4_inverse(int arr[], int row, char matrixName) { //������� ����ϴ� ���α׷� 
	int a;
	if (row == 2) { //���α���(���α���)�� 2�� �� 
		a = arr[0]*arr[3]-arr[1]*arr[2]; //2*2 arr ����� ��Ľ� 
		if (a == 0) { //a�� 0�̸� ������� �������� ���� 
			printf("Matrix %c is not invertible\n\n", matrixName);
		}
		else { //a�� 0�� �ƴϸ� ������� �����ϹǷ� ��� 
			printf("%c^(-1) = %f %f\n         %f %f\n", matrixName, (float)arr[3]/a, (float)-arr[1]/a, (float)-arr[2]/a, (float)arr[0]/a);
		}
	}
	else if (row == 3) { //���α���(���α���)�� 3�� �� 
		a = arr[0] * (arr[4]*arr[8]-arr[5]*arr[7]) +
		    arr[2] * (arr[3]*arr[7]-arr[4]*arr[6]) -
			arr[1] * (arr[3]*arr[8]-arr[5]*arr[6]); //3*3 arr ����� ��Ľ� 
		if (a == 0) { //a�� 0�̸� ������� �������� ���� 
			printf("Matrix %c is not invertible\n\n", matrixName);
		}
		else { //a�� 0�� �ƴϸ� ������� �����ϹǷ� ��� 
			printf("%c", matrixName); //main()���� ���� X �Ǵ� Y�� ����ϰ� �� 
			printf("^(-1) = %f %f %f\n", (arr[4]*arr[8]-arr[7]*arr[5])/(float)a,
		    	                         (arr[2]*arr[7]-arr[1]*arr[8])/(float)a,
										 (arr[1]*arr[5]-arr[2]*arr[4])/(float)a);
			printf("         %f %f %f\n", (arr[5]*arr[6]-arr[3]*arr[8])/(float)a,
		                	              (arr[0]*arr[8]-arr[2]*arr[6])/(float)a,
										  (arr[3]*arr[2]-arr[0]*arr[5])/(float)a);
			printf("         %f %f %f\n", (arr[3]*arr[7]-arr[6]*arr[4])/(float)a,
		            	                  (arr[6]*arr[1]-arr[0]*arr[7])/(float)a,
										  (arr[0]*arr[4]-arr[3]*arr[1])/(float)a); //���� 2*2����� ��Ľ� / arr�� ��Ľ� 
		}
	}
}

void Menu5_calculation(int arr1[],int arr2[], int row, char op) { // ������ �迭 ������ ����ϴ� �Լ� 
	int i, j;
	if (op == '+') { //���� ��ȣ�� +�� �� (����ڰ� +�� �Է����� ��) 
		printf("X + Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]+arr2[row*i+j]); //���� ��ġ�� ��ҳ��� ���� ���� ���ʴ�� ��� 
			}
			printf("\n        ");
		}
		printf("\n");
	}
	else if (op == '-') { //���� ��ȣ�� -�� �� (����ڰ� -�� �Է����� ��) 
		printf("X - Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]-arr2[row*i+j]); //���� ��ġ�� ��ҳ��� �� ���� ���ʴ�� ��� 
			}
			printf("\n        ");
		}
		printf("\n");
	}
	else if (op == '*') { //���� ��ȣ�� *�� �� (����ڰ� *�� �Է����� ��) 
		printf("X * Y = ");
		for (i = 0; i < row; i++) {
			for (j = 0; j < row; j++) {
				printf("%d ", arr1[row*i+j]*arr2[row*i+j]); //���� ��ġ�� ��ҳ��� ���� ���� ���ʴ�� ��� 
			}
			printf("\n        ");
		}
		printf("\n");
	}
}
