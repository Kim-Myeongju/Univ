#include <stdio.h>
#include <stdlib.h> //atoi�Լ� 

void swap(int* a, int* b);
void func(int* (*cmp)(int n1, int n2), int a, int b);

int main(int argc, char* argv[]) { //�� ������ �Ű������� ���� 
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]); //�Ű������� ���޵� �� ������ ���� a, b�� ���� 
    func(swap, a, b); //func�Լ� ���� 
    return 0;
}

void swap(int* a, int* b) { //�ּҸ� ���ڷ� �޾Ƽ� ����Ű�� �� ���� �ٲٴ� �Լ� 
    int temp = *a;
    *a = *b;
    *b = temp;
}

void func(int* (*cmp)(int n1, int n2), int a, int b) {
	//�Լ� �����ͷ� ���޹��� swap�Լ��� ����Ͽ� �� ���� �ٲٰ� �ٽ� ����ϴ� �Լ� 
    printf("before: a = %d, b = %d\n", a, b);
    cmp(&a, &b);
    printf("after: a = %d, b = %d", a, b);
}
