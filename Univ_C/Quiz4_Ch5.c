#include <stdio.h>

int main() {
	char smallLetter;
	char capitalLetter;
	printf("Input a small alphabet?:");
	scanf("%c", &smallLetter);
	capitalLetter = (int)smallLetter - 32;
	//ASCII코드에서 (소문자-대문자)의 값은 32이므로 미리 입력받은 smallLetter 코드 값에서 32를 뺀다.
	//즉, 대문자에 해당하는 코드 값이 저장된다. 
	printf("The capital of alphabet '%c' is %c", smallLetter, capitalLetter);
	//%c를 이용하여 소문자와 대문자 숫자의 아스키 코드 문자를 출력한다. 
}
