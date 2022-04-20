#include <stdio.h>

int perfect(int num);

int main() {
    int i; //1부터 입력받은 정수까지 함수에 대입하기 위해 선언 
    int integerInput; //제한 범위를 저장 
    printf("Input a positive integer: ");
    scanf(" %d", &integerInput);
    printf("Perfect numbers from 1 to %d are as follows:\n", integerInput);
    for (i = 1; i <= integerInput; i++) { //아래의 if문에 i를 1부터 integerInput까지 대입 
        if (perfect(i) == 1) { //perfect(i)==1이라면 i를 출력해야 함 
            printf("%d\t", i);
        }
    }
}

int perfect(int num) {
    int j = 1; //j가 1부터 (num-1)까지의 범위에 있을 때까지, 약수를 판단하기 위해 선언 
    int sum = 0; //약수의 합을 저장하기 위해 선언 
    while (j < num) { //j가 1부터 (num-1)까지의 범위에 있을 때
        if (num % j == 0) { //num이 j에 나누어 떨어진다면, j는 num의 약수이므로 sum에 j값을 더함 
            sum += j;
        }
        j++; //j가 1씩 증가하며 약수가 발견될 때마다 sum에 추가 
    }
    if (sum == num) { //반복문이 다 끝난 후 sum == num이라면 1(True)을 반환 
        return 1;
    }
    else return 0; //반복문이 다 끝난 후 sum != num이라면 0(False)을 반환 
}
