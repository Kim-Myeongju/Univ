#include <stdio.h>

void print2Darray(int (*arr)[2], int row);

int main() {
    int arr[3][2] = { { 1, 2}, {3, 4}, {5, 6} }; //2차원 배열 선언 
    print2Darray(arr, sizeof(arr)/sizeof(arr[0])); //배열의 세로 길이: 요소의 전체 개수 / 한 행에 있는 요소 개수 
}

void print2Darray(int (*arr)[2], int row) { //배열의 모든 요소를 출력하는 함수 
    int i, j;
    for (i = 0; i < row; i++) { //i는 행의 증가 
        for (j = 0; j < 2; j++) { //j는 열의 증가 
        	printf("(%d,%d): ", i, j); 
            printf("%d", arr[i][j]);
            printf("%d", (*(arr+i))[j]);
            printf("%d", *(arr[i]+j));
            printf("%d", *(*(arr+i)+j)); //15~18줄의 print문은 모두 동일한 결과 출력 
            printf("\n");
        }
    }
}
