#include <stdio.h>

int main() {
	int num;
	printf("input an integer (num)?: "); 
	scanf("%d", &num); // 5�� �Է� ������ 00000000 00000000 00000000 00000101 
	 
	//��� ��� 
	printf("num = %d\n", num);
	printf("-num = %d\n", ~num + 1);
	// ~num == 11111111 11111111 11111111 11111010�̰�, (~num + 1)���� num���� ���ϸ� 00000000 00000000 00000000 00000000�̹Ƿ� �������� (~num + 1)�̴�. 
	printf("equation1: num*4/2 = %d\n", num*4/2);
	printf("equation2: -num*4/2 = %d\n", (~num + 1)*4/2); // num�� �������� (~num + 1)�̹Ƿ� �̸� �����Ͽ� ������ ����� �Ѵ�. 
}
