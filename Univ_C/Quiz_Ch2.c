#include <stdio.h>
int main(void)
{
    printf("Hello\nI am a student at Hongik University.\nMy age is %d and My ID is %s.", 20, "C211026");
    /*
    정수 20은 정수형 서식문자인 %d를 통해 사용할 수 있지만, 학번에는 문자와 숫자가 함께 있으므로 %d를 사용할 수 없다.
    따라서 %s를 사용하여 문자열로 나타내어야 한다.
    %d에 정수 20, %s에 문자열 "C211026"이 출력된다.
    */
    return 0;
}