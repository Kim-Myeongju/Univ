#include <stdio.h>

int main() {
    int inputNumber;
    int i, j;
    printf("How many lines? ");
    scanf("%d", &inputNumber);
    for (i=1; i<=inputNumber; i++) {
        for (j=1; j<=i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    //바깥 for문에서 i는 줄 개수가 추가되는 것이고, 그 안에 위치한 for문에서 j는 (1부터 줄 번호에 해당하는 숫자)까지 출력하기 위해 반복문을 사용한다.
}