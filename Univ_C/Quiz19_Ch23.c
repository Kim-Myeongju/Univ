#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct point { //xpos, ypos�� ����� ������ ����ü 
    int xpos;
    int ypos;
} Point;

typedef struct circle { //cen(����), rad(������)�� ����� ������ ����ü 
    Point cen;
    double rad;
} Circle;

Circle GetCircleInfo() { //���� ������ �������� �Է� �޴� �Լ� 
    Circle c;
    printf("center(xpos ypos)? ");
    scanf(" %d %d", &(c.cen).xpos, &(c.cen).ypos); //���� ������ ��ǥ�� �Է� ���� 
    printf("radius? ");
    scanf(" %lf", &c.rad); //���� �������� �Է� ���� 
    return c; //����ü ���� c�� ��°�� ��ȯ 
}

void CalcCircle(Circle* c1, Circle* c2) { //���� ���� ������ �Ÿ��� �� ���� ������ ���Ͽ� ����ϴ� �Լ� 
    double distance;
    distance = sqrt((double)(((c1->cen).xpos-(c2->cen).xpos)*((c1->cen).xpos-(c2->cen).xpos) + ((c1->cen).ypos-(c2->cen).ypos)*((c1->cen).ypos-(c2->cen).ypos)));
    //���� ���� ������ �Ÿ��� ����Ͽ� distance�� ���� 
    printf("distance: %f\n", distance);
    printf("area1: %f\n", PI * (c1->rad) * (c1->rad)); //���ǳ���==������*������*������ 
    printf("area2: %f\n", PI * (c2->rad) * (c2->rad));
}

int main() {
    Circle c1 = GetCircleInfo();
    Circle c2 = GetCircleInfo();
    CalcCircle(&c1, &c2);
}
