#include <stdio.h>

int main() {
    char writeUserName[15];
    char writeUserId[10]; //���Ϸ� ���ڿ��� ����ϱ� ���� ��� 
    
    char readUserName[15];
    char readUserId[10]; //���Ϸκ��� ���ڿ��� �о���� ���� ��� 
    
    FILE * fp1 = fopen("userInfo.txt", "wt"); //��� ��Ʈ���� ���� 
    printf("Enter your name: ");
    scanf(" %[^\n]s", &writeUserName); //�̸�(����)�� �Է� �޾Ƽ� writeUserName�� ���� 
    fputs(writeUserName, fp1); //writeUserName�� ����� ���ڿ��� ���Ͽ� ���� 
    fputs("\n", fp1); //������ �ǹ��ϴ� \n�� ���Ͽ� ���� 
    printf("Enter your ID: ");
    scanf(" %s", &writeUserId); //�й��� �Է� �޾Ƽ� writeUserId�� ���� 
    fputs(writeUserId, fp1); //writeUserId�� ����� ���ڿ��� ���Ͽ� ���� 
    fputs("\n", fp1); 
    fclose(fp1); //��Ʈ���� �Ҹ� 
    
    FILE * fp2 = fopen("userInfo.txt", "rt"); //�Է� ��Ʈ���� ���� 
    fgets(readUserName, sizeof(readUserName), fp2); // \n�� ���� ������ ���ڿ��� �о��, readUserName�� ���� 
    printf("%s", readUserName); //���ڿ� ��� 
    fgets(readUserId, sizeof(readUserId), fp2); // \n�� ���� ������ ���ڿ��� �о��, readUserId�� ���� 
    printf("%s", readUserId);
    fclose(fp2); //��Ʈ���� �Ҹ� 
}
