#include <stdio.h>

int main() {
    int inputNumber;
    int i, j;
    printf("How many lines? ");
    scanf("%d", &inputNumber); //사용자로부터 몇 줄을 출력할지 입력받음
    for (i=1; i<inputNumber+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
    //바깥 for문에서 i는 줄 개수가 추가되는 것이고,
	//안에 위치한 for문에서 j는 (1부터 줄 번호에 해당하는 수 i)까지 출력하기 위해 반복문을 사용한다. 
