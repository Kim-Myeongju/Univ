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
        if ('0' <= str[i] && str[i] <= '9') { //str[i]�� ������ �� 
        	c[0] = str[i]; //c[0]==str[i], c[1]=0(null����) 
            sum += atoi(c); //sum�� str[i]�� �ش��ϴ� �������� ���� 
        }
        else { //str[i]�� ���ڰ� �ƴ� �� 
        	c[0] = str[i];
            strcat(others, c);
			//���ڿ� others�� ���ڸ� ����(strcat���� �迭�� �;� �ϹǷ� ���ڿ�(���� �� �� + null����) c �̿�) 
        }
    }
    printf("sum = %d\n", sum); //���� �� ��� 
    printf("others = %s", others); //������ ���� ��� 
}
