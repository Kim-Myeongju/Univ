#include <stdio.h>

int main() {
    char depAndSchool[100];
    char studentID[10];
    char firstName[10];
    char lastName[10];
    char birthYY[2], birthMM[2], birthDD[2];

    //<Please enter your information>에서 정보 입력받기 
    printf("<Please enter your information>\n");
    printf("\t1. Input your department/school: ");
    scanf(" %[^\n]s", depAndSchool);
    printf("\t2. Input your student ID: ");
    scanf(" %s", studentID);
    printf("\t3. Input your name (First Last): ");
    scanf(" %s %s", firstName, lastName);
    printf("\t4. Input your date of birth (yy mm dd): ");
    scanf("%s %s %s", birthYY, birthMM, birthDD);
    printf("\n");
    
    //<Student Information>정보 출력하기
    printf("<Student Information>\n");
    printf("\t1. Department/School: %s\n", depAndSchool);
    printf("\t2. Student ID: %s\n", studentID);
    printf("\t3. Last name: %s, First name: %s\n", lastName, firstName);
    printf("\t4. Date of birth: year %s, month %s, day %s, or %s/%s/%s", birthYY, birthMM, birthDD, birthYY, birthMM, birthDD);
}
