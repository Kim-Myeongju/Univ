#include <stdio.h>
#include <stdlib.h> //malloc, free

int main() {
    char * City = (char *)malloc(sizeof(char)*20); //도시이름을 입력 받을 저장 공간을 동적으로 할당 
    double * high_temp = (double *)malloc(sizeof(double)); //온도를 입력 받을 저장 공간을 동적으로 할당 
    double * low_temp = (double *)malloc(sizeof(double));
    printf("City, High, Low? ");
    scanf(" %s %lf %lf", City, high_temp, low_temp);
    printf("%s temp. difference is %lf degree", City, *high_temp-*low_temp); //입력받은 값을 적절하게 출력 
    free(City); //free함수 호출 
    free(high_temp);
    free(low_temp);
}
