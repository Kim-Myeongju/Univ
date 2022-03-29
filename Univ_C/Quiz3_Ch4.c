#include <stdio.h>

int main() {
	int num;
	printf("input an integer (num)?: "); 
	scanf("%d", &num); // 5를 입력 받으면 00000000 00000000 00000000 00000101 
	 
	//결과 출력 
	printf("num = %d\n", num);
	printf("-num = %d\n", ~num + 1);
	// ~num == 11111111 11111111 11111111 11111010이고, (~num + 1)값과 num값을 더하면 00000000 00000000 00000000 00000000이므로 음수값은 (~num + 1)이다. 
	printf("equation1: num*4/2 = %d\n", num*4/2);
	printf("equation2: -num*4/2 = %d\n", (~num + 1)*4/2); // num의 음수값이 (~num + 1)이므로 이를 대입하여 나머지 계산을 한다. 
}
