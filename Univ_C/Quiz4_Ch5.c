#include <stdio.h>

int main() {
	char smallLetter;
	char capitalLetter;
	printf("Input a small alphabet?:");
	scanf("%c", &smallLetter);
	capitalLetter = (int)smallLetter - 32;
	//ASCII�ڵ忡�� (�ҹ���-�빮��)�� ���� 32�̹Ƿ� �̸� �Է¹��� smallLetter �ڵ� ������ 32�� ����.
	//��, �빮�ڿ� �ش��ϴ� �ڵ� ���� ����ȴ�. 
	printf("The capital of alphabet '%c' is %c", smallLetter, capitalLetter);
	//%c�� �̿��Ͽ� �ҹ��ڿ� �빮�� ������ �ƽ�Ű �ڵ� ���ڸ� ����Ѵ�. 
}
