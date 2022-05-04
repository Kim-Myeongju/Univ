#include <stdio.h>

int SquareByValue(int num1);
int SquareByReference(int* num2);

int main() {
    int num;
    printf("Input an integer: "); 
    scanf("%d", &num); //정수 입력받기
    printf("%d, ", SquareByValue(num)); //Call-by-value 기반의 함수에서 반환된 제곱 값 출력 
    SquareByReference(&num); //Call-by-reference 기반의 함수를 통해, 제곱 값을 변수num에 다시 저장 
    printf("%d", num); //다시 저장된 num값을 출력 
}

int SquareByValue(int num1) {
    return num1 * num1; //num1^2의 값을 반환 
}

int SquareByReference(int* num2) {
    *num2 = (*num2)*(*num2); //(num2에 해당하는 변수에 저장된 값)의 제곱을 다시 num2에 해당하는 변수에 저장 
}
