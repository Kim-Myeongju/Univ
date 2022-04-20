#include <stdio.h>

int arr[5]; //배열 arr을 전역변수로 선언 
int i; 
int getMaxIdx(int size);
double getAverage(int size);

main() {
    for (i = 0; i < 5; i++) { //i가 0부터 4까지 반복문 실행 
    	printf("idx = %d number: ", i);
    	scanf(" %d", &arr[i]); //arr[인덱스값i]에 정수를 각각 저장 
	}
	printf("max idx = %d, max number:arr[%d] = %d\n", getMaxIdx(5), getMaxIdx(5), arr[getMaxIdx(5)]);
	//함수를 호출, 인덱스값과 그 인덱스에 해당하는 원소를 각각 출력 
	printf("average = %lf", getAverage(5));	//  수를 호출, 평균값을 출력
}

int getMaxIdx(int size) { //  장 큰 수의 배열 index를 찾는 함수
	int j;
	int maxIdx = 0;
	for (j = 1; j < size; j++) { //(인덱스로 대입할 값)j가 1부터 (size-1)일 때까지 반복문 실행 
		if (arr[maxIdx] < arr[j]) { //인덱스 값을 1씩 더해가며 조건 판단 
			maxIdx = j; //위의 조건을 만족하는 상황이라면 (더 큰 값이 있다면) 그 인덱스 j값을 maxIdx에 저장 
		}
	}
	return maxIdx; //마지막까지 남은 maxIdx값을 반환
}

double getAverage(int size) { //평균값을 계산하는 함수 
	int j;
	int sum = 0;
	for (j = 0; j < size; j++) {
		sum += arr[j]; //arr에 인덱스를 0부터 (size-1)까지 대입하며, 그 값을 sum에 계속 더함 
	}
	return (double)sum/size; //  을 배열의 크기로 나누어 평균값(실수형) 반환
}
