#include <stdio.h>

int main() {
    //변수 선언
    char depAndSchool[100];
    char studentID[10];
    char firstName[10];
    char lastName[10];
    int birthYY, birthMM, birthDD;

    //<Please enter your information> 정보 입력받기
    printf("<Please enter your information>\n");
    printf("\t1. Input your department/school: ");
    scanf(" %[^\n]s", &depAndSchool);
    printf("\t2. Input your student ID: ");
    scanf(" %s", &studentID);
    printf("\t3. Input your name (First Last): ");
    scanf(" %s %s", &firstName, &lastName);
    printf("\t4. Input your date of birth (yy mm dd): ");
    scanf("%d %d %d", &birthYY, &birthMM, &birthDD);
    printf("\n");
    
    //<Student Information> 출력
    printf("<Student Information>\n");
    printf("\t1. Department/School: %s\n", depAndSchool);
    printf("\t2. Student ID: %s\n", studentID);
    printf("\t3. Last name: %s, First name: %s\n", lastName, firstName);
    printf("\t4. Date of birth: year %d, month %d, day %d, or %d/%d/%d", birthYY, birthMM, birthDD, birthYY, birthMM, birthDD);
}
