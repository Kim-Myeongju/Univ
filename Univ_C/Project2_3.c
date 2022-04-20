#include <stdio.h>
#include <stdlib.h>

int main() {
    int randomInt = rand() % 11 + 10;
	//rand함수로 생성된 랜덤 정수를 11로 나눈 나머지는 0~10이 될 수 있다. 여기에 10을 더하면 10~20에 해당하는 정수가 생성된다. 
    int userGuessInput = 0; //사용자에게 값을 입력받는다 
    printf("Guess my number between 10 and 20 (including 10 and 20)\n");
    while (1) {
        printf("Guess? ");
        scanf(" %d", &userGuessInput); //사용자에게 정수를 입력 받아 userGuessInput에 저장 
        if (userGuessInput == randomInt) { //userGuessInput 값이 랜덤 생성된 randomInt와 같을 때 
            printf("Very good! My random number is %d\n", randomInt);
            break; //안내 문구 출력 후 반복문 종료 
        }
        else if (userGuessInput > randomInt) { //userGuessInput 값이 랜덤 생성된 randomInt보다 클 때 
            printf("%d is higher than my number.\n", userGuessInput);
        }
        else { //userGuessInput 값이 랜덤 생성된 randomInt보다 작을 때 
            printf("%d is lower than my number.\n", userGuessInput);
        }
        printf("Try again. ");
    }
}
