#include <stdio.h>

int SquareByValue(int num1);
int SquareByReference(int* num2);

int main() {
    int num;
    printf("Input an integer: "); 
    scanf("%d", &num); //���� �Է¹ޱ�
    printf("%d, ", SquareByValue(num)); //Call-by-value ����� �Լ����� ��ȯ�� ���� �� ��� 
    SquareByReference(&num); //Call-by-reference ����� �Լ��� ����, ���� ���� ����num�� �ٽ� ���� 
    printf("%d", num); //�ٽ� ����� num���� ��� 
}

int SquareByValue(int num1) {
    return num1 * num1; //num1^2�� ���� ��ȯ 
}

int SquareByReference(int* num2) {
    *num2 = (*num2)*(*num2); //(num2�� �ش��ϴ� ������ ����� ��)�� ������ �ٽ� num2�� �ش��ϴ� ������ ���� 
}
