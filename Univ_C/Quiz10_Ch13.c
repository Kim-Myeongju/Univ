#include <stdio.h>

int main() {
	int i; //8번째 줄 for문에 사용할 변수 선언 
    int arr[5] = {1, 2, 3, 4, 5}; //길이가 5인 배열 선언. 1, 2, 3, 4, 5로 초기화 
    int* ptr = arr; //배열arr의 첫번째 요소를 가리키는 포인터 변수 ptr선언. int* ptr = &arr[0]과 같음
    printf("Original   : %d, %d, %d, %d, %d\n", *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4));
    //*(ptr+n)는 arr[n]와 같으므로 (n은 정수), %d 자리에 arr[0]부터 arr[4]까지 출력됨 
    for (i = 0; i <= 4; i++) { //i == 0부터 4까지 반복 
    	*(ptr + i) += 2;
		//(ptr + i)는 arr[i]의 주소값. 위의 코드는 arr[i]+=2 문장과 같음 
	}
    printf("Original+2 : %d, %d, %d, %d, %d", *ptr, *(ptr+1), *(ptr+2), *(ptr+3), *(ptr+4));
    //for문 실행 후의 arr[0]~arr[4]값을 %d 자리에 출력
}
