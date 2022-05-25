#include <stdio.h>
#include <stdlib.h> //atoi함수 

void swap(int* a, int* b);
void func(int* (*cmp)(int n1, int n2), int a, int b);

int main(int argc, char* argv[]) { //두 정수를 매개변수로 전달 
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]); //매개변수로 전달된 두 정수를 각각 a, b에 저장 
    func(swap, a, b); //func함수 실행 
    return 0;
}

void swap(int* a, int* b) { //주소를 인자로 받아서 가리키는 두 값을 바꾸는 함수 
    int temp = *a;
    *a = *b;
    *b = temp;
}

void func(int* (*cmp)(int n1, int n2), int a, int b) {
	//함수 포인터로 전달받은 swap함수를 사용하여 두 값을 바꾸고 다시 출력하는 함수 
    printf("before: a = %d, b = %d\n", a, b);
    cmp(&a, &b);
    printf("after: a = %d, b = %d", a, b);
}
