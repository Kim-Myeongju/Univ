#include <stdio.h> //printf
#include <stdlib.h> //atoi
#include <string.h> //strlen, strcat

int main() {
    char str[20];
    char others[20] = ""; 
    char c[2] = "";
    int i;
    int sum = 0;
    fgets(str, sizeof(str), stdin);
    for (i = 0; i < strlen(str); i++) {
        if ('0' <= str[i] && str[i] <= '9') { //str[i]가 숫자일 때 
        	c[0] = str[i]; //c[0]==str[i], c[1]=0(null문자) 
            sum += atoi(c); //sum에 str[i]에 해당하는 정수값을 더함 
        }
        else { //str[i]가 숫자가 아닐 때 
        	c[0] = str[i];
            strcat(others, c);
			//문자열 others에 문자를 더함(strcat에는 배열이 와야 하므로 문자열(문자 한 개 + null문자) c 이용) 
        }
    }
    printf("sum = %d\n", sum); //숫자 합 출력 
    printf("others = %s", others); //나머지 문자 출력 
}
