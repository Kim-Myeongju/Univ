#include <stdio.h>

int main() {
	int num;
	printf("input an integer (num)?: "); 
	scanf("%d", &num);
	
	//결과 출력 
	printf("num = %d\n", num);
	printf("-num = %d\n", ~num + 1);
	//num에서 1의 보수는 ~num, 2의 보수는 1의 보수에 +1하면 되므로 (~num + 1) 
	printf("equation1: num*4/2 = %d\n", (num << 2) >> 1);
	printf("equation2: -num*4/2 = %d\n", ((~num + 1) << 2) >> 1);
	//num을 왼쪽으로 두 칸 이동하면 num*4의 값과 같고, (num*4)의 값을 다시 오른쪽으로 한 칸 이동하면 (num*4)/2 
}
