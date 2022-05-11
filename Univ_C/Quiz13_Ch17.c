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
    Swap1(&num1, &num2); //num1, num2�� ���� �ٲٴ� �Լ� Swap1 ���� 
    printf("<after Swap1>\n");
    printf("num1 num2: %d %d\n", num1, num2); //num1, num2�� ����� �� ��� 
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1])); //ptr[0], ptr[1]�� ����Ű�� ������ �� ��� 
    Swap2(&(ptr[0]), &(ptr[1])); //num1, num2�� �ٲ��� �ʰ�, �̸� ����Ű�� �����͸� swap�ϴ� �Լ� Swqp2 ���� 
    printf("<after Swap2>\n");
    printf("num1 num2: %d %d\n", num1, num2);
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1]));
    Swap3(&(ptr[0]), &(ptr[1])); //num1, num2�� ���� �ٲٴ� �Լ� ���� 
    printf("<after Swap3>\n");
    printf("num1 num2: %d %d\n", num1, num2);
    printf("ptr0 ptr1: %d %d\n", *(ptr[0]), *(ptr[1]));
}

void Swap1(int* ptr1, int* ptr2) { //num1, num2�� ���� �ٲٴ� �Լ� 
    int temp = *ptr1;
    *ptr1 = *ptr2; //ptr1�� ����Ű�� ���� = ptr2�� ����Ű�� ������ ��
    *ptr2 = temp;
}

void Swap2(int** dp1, int** dp2) { //num1, num2�� �ٲ��� �ʰ�, �̸� ����Ű�� �����͸� swap�ϴ� �Լ� 
    int* temp = *dp1;
    *dp1 = *dp2; //dp1�� ����Ű�� ������ ���� = dp2�� ����Ű�� ������ ������ ��(�ּҰ��� ����) 
    *dp2 = temp;
}

void Swap3(int** dp1, int** dp2) { //num1, num2�� ���� �ٲٴ� �Լ� 
    int temp = **dp1;
    **dp1 = **dp2; //(dp1�� ����Ű�� ������ ����)�� ����Ű�� ���� = (dp2�� ����Ű�� ������ ����)�� ����Ű�� ������ �� 
    **dp2 = temp;
}
