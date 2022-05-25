#include <stdio.h>
#include <math.h>
#define PI 3.14

typedef struct point { //xpos, ypos를 멤버로 가지는 구조체 
    int xpos;
    int ypos;
} Point;

typedef struct circle { //cen(중점), rad(반지름)를 멤버로 가지는 구조체 
    Point cen;
    double rad;
} Circle;

Circle GetCircleInfo() { //원의 중점과 반지름을 입력 받는 함수 
    Circle c;
    printf("center(xpos ypos)? ");
    scanf(" %d %d", &(c.cen).xpos, &(c.cen).ypos); //원의 중점의 좌표를 입력 받음 
    printf("radius? ");
    scanf(" %lf", &c.rad); //원의 반지름을 입력 받음 
    return c; //구조체 변수 c가 통째로 반환 
}

void CalcCircle(Circle* c1, Circle* c2) { //원의 중점 사이의 거리와 각 원의 면적을 구하여 출력하는 함수 
    double distance;
    distance = sqrt((double)(((c1->cen).xpos-(c2->cen).xpos)*((c1->cen).xpos-(c2->cen).xpos) + ((c1->cen).ypos-(c2->cen).ypos)*((c1->cen).ypos-(c2->cen).ypos)));
    //원의 중점 사이의 거리를 계산하여 distance에 저장 
    printf("distance: %f\n", distance);
    printf("area1: %f\n", PI * (c1->rad) * (c1->rad)); //원의넓이==반지름*반지름*원주율 
    printf("area2: %f\n", PI * (c2->rad) * (c2->rad));
}

int main() {
    Circle c1 = GetCircleInfo();
    Circle c2 = GetCircleInfo();
    CalcCircle(&c1, &c2);
}
