#include <stdio.h>

void swap(int* x, int* y); //swap �Լ� ���� 

int main() {
    int a;
    int b;
    printf("Enter two numbers (a, b): ");
    scanf("%d %d", &a, &b); //a�� b���� �Է¹޾� ���� 
    printf("Befor swap: a = %d, b = %d\n", a, b); //swap�Լ� ȣ�� ������ a, b�� ��� 
    swap(&a, &b); //swap�Լ� ȣ��(a�� b���� ����Ű�� �ּҰ��� ����) 
    printf("After swap: a = %d, b = %d", a, b); //swap�Լ� ȣ�� ������ a, b�� ��� 
}

void swap(int* x, int* y) { //�� ������ ����Ǿ� �ִ� ���� swap�ϴ� �Լ� 
    int temp = *x; //x�� �ش��ϴ� ���� temp�� �����صξ��, 18��° �ٿ��� y�� ���� x���� ������ �� �ִ�. 
    *x = *y; //x�� ���� y���� ���� 
    *y = temp; //y�� temp(���� x��)�� ����. x�� 17��° �ٿ���, �̹� y�� �ش��ϴ� ������ �ٲ� �����̱� ����
}
