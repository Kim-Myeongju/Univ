#include <stdio.h>

int change(int ptr[], int len);
int printArray(int* ptr, int len);

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; //배열 선언 
    printArray(arr, sizeof(arr)/sizeof(int)); //배열의 요소를 출력 
    change(arr, sizeof(arr)/sizeof(int)); //배열의 첫 요소와 마지막 요소를 변경 
    printArray(arr, sizeof(arr)/sizeof(int)); //change함수를 통해 변경된 배열의 요소를 출력 
}

int change(int ptr[], int len) { //배열의 첫 요소와 마지막 요소를 변경하는 함수 
    int temp = ptr[0]; //temp에 첫 요소 값 저장 
    ptr[0] = ptr[len-1]; //첫 번째 요소를 마지막 요소로 변경 
    ptr[len-1] = temp; //마지막 요소를 첫 번째 요소(temp에 저장되어 있음)로 변경 
}

int printArray(int* ptr, int len) { //배열의 요소를 출력하는 함수 
    int i;
    for(i = 0; i < len; i++) { //i가 0부터 (len-1)일 때까지 반복 
        printf("%d ", ptr[i]); //ptr에서 인덱스 i에 해당하는 요소를 출력 
    }
    printf("\n");
}
