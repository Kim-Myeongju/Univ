#include <stdio.h>

void print2Darray(int (*arr)[2], int row);

int main() {
    int arr[3][2] = { { 1, 2}, {3, 4}, {5, 6} }; //2���� �迭 ���� 
    print2Darray(arr, sizeof(arr)/sizeof(arr[0])); //�迭�� ���� ����: ����� ��ü ���� / �� �࿡ �ִ� ��� ���� 
}

void print2Darray(int (*arr)[2], int row) { //�迭�� ��� ��Ҹ� ����ϴ� �Լ� 
    int i, j;
    for (i = 0; i < row; i++) { //i�� ���� ���� 
        for (j = 0; j < 2; j++) { //j�� ���� ���� 
        	printf("(%d,%d): ", i, j); 
            printf("%d", arr[i][j]);
            printf("%d", (*(arr+i))[j]);
            printf("%d", *(arr[i]+j));
            printf("%d", *(*(arr+i)+j)); //15~18���� print���� ��� ������ ��� ��� 
            printf("\n");
        }
    }
}
