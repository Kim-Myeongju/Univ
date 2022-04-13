#include <stdio.h>

int main() {
	char inputChar;
	while (1) {
		printf("Input a character:");
		scanf(" %c", &inputChar); //문자 입력 받기 
		if ('A' <= inputChar && inputChar <= 'Z') { //inputChar가 대문자일 때 
			printf("small letter is %c\n", inputChar + ('a'-'A')); //(대문자) + {(소문자)-(대문자)} = (소문자) 
		}
		else if ('a' <= inputChar && inputChar <= 'z') { //inputChar가 소문자일 때 
			printf("big letter is %c\n", inputChar + ('A'-'a')); //(소문자) + {(대문자)-(소문자)} = (대문자) 
		}
		else { //알파벳을 입력하지 않았을 때 
			printf("You entered non alphabet\n");
			if (inputChar == '0') { //'0'을 입력했을 때 프로그램 종료 
				break;
			}
		}
	}
} 
