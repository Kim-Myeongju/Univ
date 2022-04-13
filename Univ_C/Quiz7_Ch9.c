#include <stdio.h>

int MyPower (int base, int exp) {
    if (exp >= 1) {
        return base * MyPower(base, exp-1); 
    }
    else {
        return 1;
    }
} //exp�� 1���� �۾����� ������ base�� ������. exp�� 1���� �۾����ٸ� �� �� �Լ� return���� 1�� �������� ����ȴ�. 

int main() {
    int inputBase=0, inputExp=0;
    printf("Input a base number:");
    scanf(" %d", &inputBase);
    printf("Input an exponent number:");
    scanf(" %d", &inputExp);
    printf("%d^%d=%d", inputBase, inputExp, MyPower(inputBase,inputExp)); //�� ��° %d����, �Է¹��� inputBase�� inputExp�� �Լ��� �����Ͽ� ��� 
}
