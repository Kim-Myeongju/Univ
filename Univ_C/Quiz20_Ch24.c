#include <stdio.h>

int main() {
    char writeUserName[15];
    char writeUserId[10]; //파일로 문자열을 출력하기 위해 사용 
    
    char readUserName[15];
    char readUserId[10]; //파일로부터 문자열을 읽어오기 위해 사용 
    
    FILE * fp1 = fopen("userInfo.txt", "wt"); //출력 스트림의 생성 
    printf("Enter your name: ");
    scanf(" %[^\n]s", &writeUserName); //이름(영문)을 입력 받아서 writeUserName에 저장 
    fputs(writeUserName, fp1); //writeUserName에 저장된 문자열을 파일에 저장 
    fputs("\n", fp1); //개행을 의미하는 \n을 파일에 저장 
    printf("Enter your ID: ");
    scanf(" %s", &writeUserId); //학번을 입력 받아서 writeUserId에 저장 
    fputs(writeUserId, fp1); //writeUserId에 저장된 문자열을 파일에 저장 
    fputs("\n", fp1); 
    fclose(fp1); //스트림의 소멸 
    
    FILE * fp2 = fopen("userInfo.txt", "rt"); //입력 스트림의 생성 
    fgets(readUserName, sizeof(readUserName), fp2); // \n을 만날 때까지 문자열을 읽어옴, readUserName에 저장 
    printf("%s", readUserName); //문자열 출력 
    fgets(readUserId, sizeof(readUserId), fp2); // \n을 만날 때까지 문자열을 읽어옴, readUserId에 저장 
    printf("%s", readUserId);
    fclose(fp2); //스트림의 소멸 
}
