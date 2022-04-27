#include <stdio.h>

void swap(int* x, int* y); //swap 함수 선언 

int main() {
    int a;
    int b;
    printf("Enter two numbers (a, b): ");
    scanf("%d %d", &a, &b); //a와 b값을 입력받아 저장 
    printf("Befor swap: a = %d, b = %d\n", a, b); //swap함수 호출 이전의 a, b값 출력 
    swap(&a, &b); //swap함수 호출(a와 b값을 가리키는 주소값을 대입) 
    printf("After swap: a = %d, b = %d", a, b); //swap함수 호출 이후의 a, b값 출력 
}

void swap(int* x, int* y) { //두 변수에 저장되어 있던 값을 swap하는 함수 
    int temp = *x; //x에 해당하는 값을 temp에 저장해두어야, 18번째 줄에서 y에 기존 x값을 저장할 수 있다. 
    *x = *y; //x에 기존 y값을 저장 
    *y = temp; //y에 temp(기존 x값)를 저장. x는 17번째 줄에서, 이미 y에 해당하던 값으로 바뀐 상태이기 때문
}
