#include <stdio.h>

int arr[5]; //�迭 arr�� ���������� ���� 
int i; 
int getMaxIdx(int size);
double getAverage(int size);

main() {
    for (i = 0; i < 5; i++) { //i�� 0���� 4���� �ݺ��� ���� 
    	printf("idx = %d number: ", i);
    	scanf(" %d", &arr[i]); //arr[�ε�����i]�� ������ ���� ���� 
	}
	printf("max idx = %d, max number:arr[%d] = %d\n", getMaxIdx(5), getMaxIdx(5), arr[getMaxIdx(5)]);
	//�Լ��� ȣ��, �ε������� �� �ε����� �ش��ϴ� ���Ҹ� ���� ��� 
	printf("average = %lf", getAverage(5));	//  ���� ȣ��, ��հ��� ���
}

int getMaxIdx(int size) { //  �� ū ���� �迭 index�� ã�� �Լ�
	int j;
	int maxIdx = 0;
	for (j = 1; j < size; j++) { //(�ε����� ������ ��)j�� 1���� (size-1)�� ������ �ݺ��� ���� 
		if (arr[maxIdx] < arr[j]) { //�ε��� ���� 1�� ���ذ��� ���� �Ǵ� 
			maxIdx = j; //���� ������ �����ϴ� ��Ȳ�̶�� (�� ū ���� �ִٸ�) �� �ε��� j���� maxIdx�� ���� 
		}
	}
	return maxIdx; //���������� ���� maxIdx���� ��ȯ
}

double getAverage(int size) { //��հ��� ����ϴ� �Լ� 
	int j;
	int sum = 0;
	for (j = 0; j < size; j++) {
		sum += arr[j]; //arr�� �ε����� 0���� (size-1)���� �����ϸ�, �� ���� sum�� ��� ���� 
	}
	return (double)sum/size; //  �� �迭�� ũ��� ������ ��հ�(�Ǽ���) ��ȯ
}
