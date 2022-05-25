#include <stdio.h>

struct profile { //int형 나이(age)와 int형 키(height)를 멤버로 가지는 구조체
    int age;
    int height;
};

struct student { //char형ID와 구조체 profile을 포인터 형태의 멤버로 가지는 구조체 
    char ID[10];
    struct profile* ptr;
};

int main() {
    int i;
    struct student std[2]; //2개의 student구조체를 배열로 선언 
    struct profile pro[2]; //2개의 profile구조체를 배열로 선언 
    
    for (i = 0; i < 2; i++) {
    	std[i].ptr = &pro[i]; //std[i]의 멤버 ptr = pro[i]의 주소값 
        printf("Input student(%d) ID: ", i+1);
        scanf(" %s", &std[i].ID); //문자열을 입력 받아, std[i]의 멤버 ID에 저장 
        printf("Age: ");
        scanf(" %d", &pro[i].age); //정수를 입력 받아, pro[i]의 멤버 age에 저장 
        printf("Height: ");
        scanf(" %d", &pro[i].height); //정수를 입력 받아, pro[i]의 멤버 height에 저장 
    }
    
    for (i = 0; i < 2; i++) {
    	printf("\nStudent(%d)\n", i+1);
        printf("ID: %s\n", std[i].ID); //std[i]의 멤버 ID의 값을 출력 
        printf("Age: %d\n", (std[i].ptr)->age); //std[i].ptr이 가리키는 pro[i], 그 pro[i]의 멤버 age의 값을 출력 
        printf("Height: %d\n", (std[i].ptr)->height); //std[i].ptr이 가리키는 pro[i], 그 pro[i]의 멤버 height의 값을 출력 
    }
}
