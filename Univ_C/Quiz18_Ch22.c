#include <stdio.h>

struct profile { //int�� ����(age)�� int�� Ű(height)�� ����� ������ ����ü
    int age;
    int height;
};

struct student { //char��ID�� ����ü profile�� ������ ������ ����� ������ ����ü 
    char ID[10];
    struct profile* ptr;
};

int main() {
    int i;
    struct student std[2]; //2���� student����ü�� �迭�� ���� 
    struct profile pro[2]; //2���� profile����ü�� �迭�� ���� 
    
    for (i = 0; i < 2; i++) {
    	std[i].ptr = &pro[i]; //std[i]�� ��� ptr = pro[i]�� �ּҰ� 
        printf("Input student(%d) ID: ", i+1);
        scanf(" %s", &std[i].ID); //���ڿ��� �Է� �޾�, std[i]�� ��� ID�� ���� 
        printf("Age: ");
        scanf(" %d", &pro[i].age); //������ �Է� �޾�, pro[i]�� ��� age�� ���� 
        printf("Height: ");
        scanf(" %d", &pro[i].height); //������ �Է� �޾�, pro[i]�� ��� height�� ���� 
    }
    
    for (i = 0; i < 2; i++) {
    	printf("\nStudent(%d)\n", i+1);
        printf("ID: %s\n", std[i].ID); //std[i]�� ��� ID�� ���� ��� 
        printf("Age: %d\n", (std[i].ptr)->age); //std[i].ptr�� ����Ű�� pro[i], �� pro[i]�� ��� age�� ���� ��� 
        printf("Height: %d\n", (std[i].ptr)->height); //std[i].ptr�� ����Ű�� pro[i], �� pro[i]�� ��� height�� ���� ��� 
    }
}
