#include <stdio.h>

int main() {
    int a, gap;
    a = getchar(); //문자(알파벳 또는 숫자)하나를 입력 받음 
    if ('A' <= a && a <= 'Z') { //입력 받은 문자가 대문자일 때 
        putchar(a - ('A' - 'a')); //소문자로 변경하여 출력 
    }
    else if ('a' <= a && a <= 'z') { //입력 받은 문자가 소문자일 때 
        putchar(a - ('a' - 'A')); //대문자로 변경하여 출력 
    }
    else if ('0' <= a && a <= '9') { //입력 받은 문자가 숫자일 때 
        printf("%d", (a - '0')*(a - '0'));
		//a의 값(아스키코드) - 0의 아스키코드 값은 키보드로 입력했던 숫자임 
    }
}
