#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);
void func()

int main(int argc, char* argv[]) {
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    func(swap, a, b);
    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}