#include <stdio.h>

int main() {
    //변수 선언
    int num1, num2, num3;
    int productNum;
    int sumNum;
    float averageNum;

    //세 정수 입력받기
    printf("Input three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //값 계산 후 각각의 변수에 저장 (productNum, sumNum, averageNum)
    productNum = num1 * num2 * num3;
    sumNum = num1 + num2 + num3;
    averageNum = (float)sumNum / (float)3;

    //결과 출력
    printf("<Entered number: %d %d %d>\n", num1, num2, num3);
    printf("\t1) The Product (%d*%d*%d) is %d\n", num1, num2, num3, productNum);
    printf("\t2) The Sum (%d+%d+%d) is %d\n", num1, num2, num3, sumNum);
    printf("\t3) The Average (%d/3) is %f\n", sumNum, averageNum);
    printf("\t4) Even number? (1: even, 0: odd) %d is %d, %d is %d, %d is %d", num1, (num1%2==0), num2, (num2%2==0), num3, (num3%2==0));
}