#include <stdio.h>

void Make99(void);
int Find99(int a, int b); 
int arr[9][9]; //2차원 배열을 전역변수로 선언 

int main() {
    int num1, num2;
    Make99(); //구구단을 생성, 완성하는 함수 실행 
    printf("Input two integers(1~9): ");
    scanf(" %d %d", &num1, &num2); //두 자연수 값을 입력 받기 
    Find99(num1, num2); //입력받은 두 값의 곱을 arr배열에서 찾아 출력하는 함수 실행 
}

void Make99(void) { //구구단을 생성, 완성하는 함수 
    int i, j;
    for (i = 0; i <= 8; i++) { //i가 0부터 8일 때까지 반복(2차원 배열에서 (i+1)행을 의미) 
        for (j = 0; j <= 8; j++) { //j가 0부터 8일 때까지 반복(2차원 배열의 (j+1)행을 의미) 
            arr[i][j] = (i+1) * (j+1); //인덱스값은 0부터 8까지 들어가므로, 행과 열에 1을 더하여 곱한 값을 저장 
        }
    }
}

int Find99(int a, int b) { //두 값의 곱을 arr배열에서 찾아 출력하는 함수
	printf("%d * %d = %d", a, b, arr[a-1][b-1]);
}
