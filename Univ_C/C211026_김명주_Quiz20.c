#include <stdio.h>

int main() {
    char userName[7];
    char userId[10];
    FILE * fp = fopen("userInfo", "Wt");
    printf("Enter your name: ");
    scanf(" %s", userName);
    fputs(userName, fp);
    printf("Enter your ID: ", userId);
    scanf(" %s", userId);
    fputs(userId, fp);
}
