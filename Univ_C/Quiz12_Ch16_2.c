#include <stdio.h>

int original[3][4]; //2차원 배열을 전역변수로 선언 
int transpose[4][3]; //2차원 배열을 전역변수로 선언 
int InputMatrix(void);
int TransposeMatrix(void);

int main() {
    int i, j;
    InputMatrix(); //배열에 들어갈 값을 입력받아 저장하는 함수 실행 
    TransposeMatrix(); //Transpose 하는 함수 실행 
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]); //배열에서 각 인덱스에 해당하는 값을 출력 
        }
        printf("\n"); //한 행의 출력이 끝나면 줄 변경 
    }
}

int InputMatrix(void) { //배열에 들어갈 값을 입력받아 저장하는 함수 
    int k;
    for (k = 0; k <= 2; k++) { //각 행을 따로 입력받기 위해 k가 0부터 2일 때까지 반복하도록 함 
        printf("[%d][ ]: Input 4 integers: ", k);
        scanf(" %d %d %d %d", &original[k][0], &original[k][1], &original[k][2], &original[k][3]); //네 정수를 입력받아 (k+1)행에 저장 
    }
}

int TransposeMatrix(void) { //Transpose 하는 함수 
    int i, j;
    for (i = 0; i < 3; i++) { //original배열의 행이 1부터 3이므로, i는 0부터 2일 때까지 반복 
        for (j = 0; j < 4; j++) { //origianl배열의 열이 1부터 4이므로, j는 0부터 3일 때까지 반복 
            transpose[j][i] = original[i][j]; //original배열에 대하여,  행과 열의 인덱스를 서로 바꾸어 transpose배열에 저장 
        }
    }
}
