#include <stdio.h>
#include <stdlib.h> //malloc, free

int main() {
    char * City = (char *)malloc(sizeof(char)*20); //�����̸��� �Է� ���� ���� ������ �������� �Ҵ� 
    double * high_temp = (double *)malloc(sizeof(double)); //�µ��� �Է� ���� ���� ������ �������� �Ҵ� 
    double * low_temp = (double *)malloc(sizeof(double));
    printf("City, High, Low? ");
    scanf(" %s %lf %lf", City, high_temp, low_temp);
    printf("%s temp. difference is %lf degree", City, *high_temp-*low_temp); //�Է¹��� ���� �����ϰ� ��� 
    free(City); //free�Լ� ȣ�� 
    free(high_temp);
    free(low_temp);
}
