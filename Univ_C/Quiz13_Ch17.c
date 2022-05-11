#include <stdio.h>

void Swap1(int* ptr1, int* ptr2);
void Swap2(int** dp1, int** dp2);
void Swap3(int** dp1, int** dp2);

int main() {
    int num1 = 10, num2 = 20;
    int *ptr[] = {&num1, &num2};
    printf("<before Swap>\n");
    printf("num1 num2: %d %d\n", num1, num2);
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1]));
    Swap1(&num1, &num2); //num1, num2의 값을 바꾸는 함수 Swap1 실행 
    printf("<after Swap1>\n");
    printf("num1 num2: %d %d\n", num1, num2); //num1, num2에 저장된 값 출력 
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1])); //ptr[0], ptr[1]이 가리키는 변수의 값 출력 
    Swap2(&(ptr[0]), &(ptr[1])); //num1, num2는 바꾸지 않고, 이를 가리키는 포인터만 swap하는 함수 Swqp2 실행 
    printf("<after Swap2>\n");
    printf("num1 num2: %d %d\n", num1, num2);
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1]));
    Swap3(&(ptr[0]), &(ptr[1])); //num1, num2의 값을 바꾸는 함수 실행 
    printf("<after Swap3>\n");
    printf("num1 num2: %d %d\n", num1, num2);
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1]));
}

void Swap1(int* ptr1, int* ptr2) { //num1, num2의 값을 바꾸는 함수 
    int temp = *ptr1;
    *ptr1 = *ptr2; //ptr1이 가리키는 변수 = ptr2가 가리키는 변수의 값
    *ptr2 = temp;
}

void Swap2(int** dp1, int** dp2) { //num1, num2는 바꾸지 않고, 이를 가리키는 포인터만 swap하는 함수 
    int* temp = *dp1;
    *dp1 = *dp2; //dp1이 가리키는 포인터 변수 = dp2가 가리키는 포인터 변수의 값(주소값의 형태) 
    *dp2 = temp;
}

void Swap3(int** dp1, int** dp2) { //num1, num2의 값을 바꾸는 함수 
    int temp = **dp1;
    **dp1 = **dp2; //(dp1이 가리키는 포인터 변수)가 가리키는 변수 = (dp2가 가리키는 포인터 변수)가 가리키는 변수의 값 
    **dp2 = temp;
}
