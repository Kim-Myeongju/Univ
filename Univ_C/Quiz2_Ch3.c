#include <stdio.h>
int main(void)
{
    float score1, score2, score3;
    float totalScore;
    float averageScore;
    int comparison; // 변수를 선언. 각각 점수, 총점수, 평균점수, 참거짓 결과값을 저장한다. 
    printf("Input 3 scores: ");
    scanf("%f %f %f", &score1, &score2, &score3); // 점수 세 개를 입력받아 각각의 변수에 저장한다. 
    totalScore = score1 + score2 + score3;
    averageScore = totalScore / 3;
    comparison = ( averageScore > 5); // 평균점수가 5보다 크면 참(1) 값을 저장하고, 5보다 크지 않으면 거짓(0) 값을 저장한다. 
    printf("Your scores: %.0f %.0f %.0f\n", score1, score2, score3);
    printf("Total: %.0f\n", totalScore);
    printf("Average: %.6f\n", averageScore);
    printf(">5?: %d", comparison); // 소스코드 10~12번째 줄에서 연산, 저장한 값들을 각 줄에 출력한다. 
}