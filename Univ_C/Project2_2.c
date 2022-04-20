#include <stdio.h>

int perfect(int num);

int main() {
    int i; //1���� �Է¹��� �������� �Լ��� �����ϱ� ���� ���� 
    int integerInput; //���� ������ ���� 
    printf("Input a positive integer: ");
    scanf(" %d", &integerInput);
    printf("Perfect numbers from 1 to %d are as follows:\n", integerInput);
    for (i = 1; i <= integerInput; i++) { //�Ʒ��� if���� i�� 1���� integerInput���� ���� 
        if (perfect(i) == 1) { //perfect(i)==1�̶�� i�� ����ؾ� �� 
            printf("%d\t", i);
        }
    }
}

int perfect(int num) {
    int j = 1; //j�� 1���� (num-1)������ ������ ���� ������, ����� �Ǵ��ϱ� ���� ���� 
    int sum = 0; //����� ���� �����ϱ� ���� ���� 
    while (j < num) { //j�� 1���� (num-1)������ ������ ���� ��
        if (num % j == 0) { //num�� j�� ������ �������ٸ�, j�� num�� ����̹Ƿ� sum�� j���� ���� 
            sum += j;
        }
        j++; //j�� 1�� �����ϸ� ����� �߰ߵ� ������ sum�� �߰� 
    }
    if (sum == num) { //�ݺ����� �� ���� �� sum == num�̶�� 1(True)�� ��ȯ 
        return 1;
    }
    else return 0; //�ݺ����� �� ���� �� sum != num�̶�� 0(False)�� ��ȯ 
}
