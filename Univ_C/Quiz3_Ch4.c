#include <stdio.h>

int main() {
	int num;
	printf("input an integer (num)?: "); 
	scanf("%d", &num);
	
	//��� ��� 
	printf("num = %d\n", num);
	printf("-num = %d\n", ~num + 1);
	//num���� 1�� ������ ~num, 2�� ������ 1�� ������ +1�ϸ� �ǹǷ� (~num + 1) 
	printf("equation1: num*4/2 = %d\n", (num << 2) >> 1);
	printf("equation2: -num*4/2 = %d\n", ((~num + 1) << 2) >> 1);
	//num�� �������� �� ĭ �̵��ϸ� num*4�� ���� ����, (num*4)�� ���� �ٽ� ���������� �� ĭ �̵��ϸ� (num*4)/2 
}
