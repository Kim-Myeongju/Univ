#include <stdio.h>

int main() {
	int i; //8��° �� for���� ����� ���� ���� 
    int arr[5] = {1, 2, 3, 4, 5}; //���̰� 5�� �迭 ����. 1, 2, 3, 4, 5�� �ʱ�ȭ 
    int* ptr = arr; //�迭arr�� ù��° ��Ҹ� ����Ű�� ������ ���� ptr����. int* ptr = &arr[0]�� ����
    printf("Original   : %d, %d, %d, %d, %d\n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4));
    //*(ptr+n)�� arr[n]�� �����Ƿ� (n�� ����), %d �ڸ��� arr[0]���� arr[4]���� ��µ� 
    for (i = 0; i <= 4; i++) { //i == 0���� 4���� �ݺ� 
    	*(ptr + i) += 2;
		//(ptr + i)�� arr[i]�� �ּҰ�. ���� �ڵ�� arr[i]+=2 ����� ���� 
	}
    printf("Original+2 : %d, %d, %d, %d, %d", *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4));
    //for�� ���� ���� arr[0]~arr[4]���� %d �ڸ��� ���
}
