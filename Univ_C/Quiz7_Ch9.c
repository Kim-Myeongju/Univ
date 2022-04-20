#include <stdio.h>

int MyPower1(int base, int exp);
int MyPower2(int base, int exp);

int main() {
    int inputBase = 0, inputExp = 0;
    printf("Input a base number:");
    scanf(" %d", &inputBase); //�ؼ�(base)�Է¹ޱ� 
    printf("Input an exponent number:");
    scanf(" %d", &inputExp); //����(exponent)�Է¹ޱ� 
    printf("%d^%d=%d\n", inputBase, inputExp, MyPower1(inputBase, inputExp)); //loop���� �Լ��� ���� ��� ��� 
    printf("%d^%d=%d\n", inputBase, inputExp, MyPower2(inputBase, inputExp)); //recursive�� �̿��� �Լ��� ���� ��� ��� 
}

int MyPower1(int base, int exp) { //loop(�ݺ�)���� 
    int result = 1;
    while(exp>=1) { //exp�� 1�� ����, exp�� 1���� �۾����� ������ �ݺ��� ����.
        result = result * base; //���� ���ǹ��� ������ �� while�� ���� �ڵ带 �ݺ���. �ᱹ base�� exp�� ������ ����� ���� 
        exp--;
    }
    return result; //�ݺ����� ���� ���� ���� ��ȯ 
}

int MyPower2(int base, int exp) { //Recursive(���)�Լ����� 
    if (exp >= 1) {
        return base * MyPower2(base, exp-1); //exp�� 1�� �۾����� ����Լ� ����. ����Լ��� ����Ǹ鼭 base�� ������. 
    }
    else {
        return 1; //exp�� 1���� �۴ٸ� 1�� ��ȯ��. ���̻� ����Լ��� ������ �ʰ� �ǹǷ� ���� �Լ��� ���� ���Ǿ� ����.
    }
}
