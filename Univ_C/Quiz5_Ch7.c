#include <stdio.h>

int main() {
    int inputNumber;
    int i, j;
    printf("How many lines? ");
    scanf("%d", &inputNumber); //����ڷκ��� �� ���� ������� �Է¹���
    for (i=1; i<inputNumber+1; i++) {
        for (j=1; j<i+1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}
    //�ٱ� for������ i�� �� ������ �߰��Ǵ� ���̰�,
	//�ȿ� ��ġ�� for������ j�� (1���� �� ��ȣ�� �ش��ϴ� �� i)���� ����ϱ� ���� �ݺ����� ����Ѵ�. 
