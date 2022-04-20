#include <stdio.h>

int prime(int num);

int main() {
    int i = 0; //����i�� 2���� �Է¹��� ������ ���ʷ� prime�Լ��� �����ϱ� ���� ����
    int j = 0; //����j�� ���ݱ��� �� ���� �Ҽ��� ����ߴ��� �����Ͽ�, �ٹٲ��� ���� �Ǵ��ϱ� ���� ���� 
    int integerInput; //�Ҽ� ��� ���� ������ ����(2���� integerInput����) 
    printf("Input a positive integer: ");
    scanf(" %d", &integerInput);
    printf("Prime numbers from 2 to %d are as follows:\n", integerInput);
    for (i = 2; i <= integerInput; i++) {
        if (prime(i) == 1) { //prime(i)�� ���� 1(True)�� �� 
        	j++; //prime(i) == 1�� �����Ѵٸ� �� �ϳ��� �Ҽ��� ��µ� ���̹Ƿ� j++ 
        	if (j % 8 == 0) {
        		printf("%d\n", i); //�� �������� ã�� �Ҽ��� ������ 8�� ������ �������ٸ� �ٹٲ� 
			}
			else {
				printf("%d\t", i); //�� �������� ã�� �Ҽ��� ������ 8�� ������ �������� �ʴ´ٸ� tab�� ���� �� ��� 
			}
        }
    }
}

int prime(int num) { //�Ҽ��� �Ǵ��ϴ� �Լ� 
    int k = 2; //num�� k�� ������ ���� ���� 
    while (k < num) {
        if ((num % k == 0)) { //num/k�� ������ �������ٸ� �Ҽ��� �ƴ� 
            return 0; //�Ҽ��� �ƴϹǷ� 0(False) ��ȯ 
        }
        k++; //���� if������ �Ҽ��� �ƴ϶�� ������ ���� ���Ͽ��� ��� k++�Ͽ� �ٽ� �����ϵ��� �� 
    }
    return 1; //���� while���� �� ����� ���� return 0;�� ������� �ʾҴٸ� �Ҽ��̹Ƿ� 1(True)�� ��ȯ 
}
