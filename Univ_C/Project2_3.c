#include <stdio.h>
#include <stdlib.h>

int main() {
    int randomInt = rand() % 11 + 10;
	//rand�Լ��� ������ ���� ������ 11�� ���� �������� 0~10�� �� �� �ִ�. ���⿡ 10�� ���ϸ� 10~20�� �ش��ϴ� ������ �����ȴ�. 
    int userGuessInput = 0; //����ڿ��� ���� �Է¹޴´� 
    printf("Guess my number between 10 and 20 (including 10 and 20)\n");
    while (1) {
        printf("Guess? ");
        scanf(" %d", &userGuessInput); //����ڿ��� ������ �Է� �޾� userGuessInput�� ���� 
        if (userGuessInput == randomInt) { //userGuessInput ���� ���� ������ randomInt�� ���� �� 
            printf("Very good! My random number is %d\n", randomInt);
            break; //�ȳ� ���� ��� �� �ݺ��� ���� 
        }
        else if (userGuessInput > randomInt) { //userGuessInput ���� ���� ������ randomInt���� Ŭ �� 
            printf("%d is higher than my number.\n", userGuessInput);
        }
        else { //userGuessInput ���� ���� ������ randomInt���� ���� �� 
            printf("%d is lower than my number.\n", userGuessInput);
        }
        printf("Try again. ");
    }
}
