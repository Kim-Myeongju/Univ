#include <stdio.h>

int main() {
	char inputChar;
	while (1) {
		printf("Input a character:");
		scanf(" %c", &inputChar); //���� �Է� �ޱ� 
		if ('A' <= inputChar && inputChar <= 'Z') { //inputChar�� �빮���� �� 
			printf("small letter is %c\n", inputChar + ('a'-'A')); //(�빮��) + {(�ҹ���)-(�빮��)} = (�ҹ���) 
		}
		else if ('a' <= inputChar && inputChar <= 'z') { //inputChar�� �ҹ����� �� 
			printf("big letter is %c\n", inputChar + ('A'-'a')); //(�ҹ���) + {(�빮��)-(�ҹ���)} = (�빮��) 
		}
		else { //���ĺ��� �Է����� �ʾ��� �� 
			printf("You entered non alphabet\n");
			if (inputChar == '0') { //'0'�� �Է����� �� ���α׷� ���� 
				break;
			}
		}
	}
} 
