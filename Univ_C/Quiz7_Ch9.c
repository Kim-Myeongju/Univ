#include <stdio.h>

int MyPower (int base, int exp) {
    if (exp >= 1) {
        return base * MyPower(base, exp-1); 
    }
    else {
        return 1;
    }
} //exp가 1보다 작아지기 전까지 base가 곱해짐. exp가 1보다 작아진다면 그 전 함수 return값에 1이 곱해지고 종료된다. 

int main() {
    int inputBase=0, inputExp=0;
    printf("Input a base number:");
    scanf(" %d", &inputBase);
    printf("Input an exponent number:");
    scanf(" %d", &inputExp);
    printf("%d^%d=%d", inputBase, inputExp, MyPower(inputBase,inputExp)); //세 번째 %d에는, 입력받은 inputBase와 inputExp를 함수에 전달하여 출력 
}
