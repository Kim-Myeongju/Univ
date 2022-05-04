#include <stdio.h>

int original[3][4]; //2���� �迭�� ���������� ���� 
int transpose[4][3]; //2���� �迭�� ���������� ���� 
int InputMatrix(void);
int TransposeMatrix(void);

int main() {
    int i, j;
    InputMatrix(); //�迭�� �� ���� �Է¹޾� �����ϴ� �Լ� ���� 
    TransposeMatrix(); //Transpose �ϴ� �Լ� ���� 
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]); //�迭���� �� �ε����� �ش��ϴ� ���� ��� 
        }
        printf("\n"); //�� ���� ����� ������ �� ���� 
    }
}

int InputMatrix(void) { //�迭�� �� ���� �Է¹޾� �����ϴ� �Լ� 
    int k;
    for (k = 0; k <= 2; k++) { //�� ���� ���� �Է¹ޱ� ���� k�� 0���� 2�� ������ �ݺ��ϵ��� �� 
        printf("[%d][ ]: Input 4 integers: ", k);
        scanf(" %d %d %d %d", &original[k][0], &original[k][1], &original[k][2], &original[k][3]); //�� ������ �Է¹޾� (k+1)�࿡ ���� 
    }
}

int TransposeMatrix(void) { //Transpose �ϴ� �Լ� 
    int i, j;
    for (i = 0; i < 3; i++) { //original�迭�� ���� 1���� 3�̹Ƿ�, i�� 0���� 2�� ������ �ݺ� 
        for (j = 0; j < 4; j++) { //origianl�迭�� ���� 1���� 4�̹Ƿ�, j�� 0���� 3�� ������ �ݺ� 
            transpose[j][i] = original[i][j]; //original�迭�� ���Ͽ�,  ��� ���� �ε����� ���� �ٲپ� transpose�迭�� ���� 
        }
    }
}
