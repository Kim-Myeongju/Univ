#include <stdio.h>

int change(int ptr[], int len);
int printArray(int* ptr, int len);

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //�迭 ���� 
    printArray(arr, sizeof(arr)/sizeof(int)); //�迭�� ��Ҹ� ��� 
    change(arr, sizeof(arr)/sizeof(int)); //�迭�� ù ��ҿ� ������ ��Ҹ� ���� 
    printArray(arr, sizeof(arr)/sizeof(int)); //change�Լ��� ���� ����� �迭�� ��Ҹ� ��� 
}

int change(int ptr[], int len) { //�迭�� ù ��ҿ� ������ ��Ҹ� �����ϴ� �Լ� 
    int temp = ptr[0]; //temp�� ù ��� �� ���� 
    ptr[0] = ptr[len-1]; //ù ��° ��Ҹ� ������ ��ҷ� ���� 
    ptr[len-1] = temp; //������ ��Ҹ� ù ��° ���(temp�� ����Ǿ� ����)�� ���� 
}

int printArray(int* ptr, int len) { //�迭�� ��Ҹ� ����ϴ� �Լ� 
    int i;
    for(i = 0; i < len; i++) { //i�� 0���� (len-1)�� ������ �ݺ� 
        printf("%d ", ptr[i]); //ptr���� �ε��� i�� �ش��ϴ� ��Ҹ� ��� 
    }
    printf("\n");
}
