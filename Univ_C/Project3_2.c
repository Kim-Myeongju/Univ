#include <stdio.h>
#include <string.h>

typedef struct info { //name, telNumber, emailAddress를 멤버로 가지는 구조체 
    char name[15];
    char telNumber[15];
    char emailAddress[30];
} Info;

int main() {
    int i = 0; //for문, while문을 실행할 때 사용 
    int inputNum = 0; //"Choose the item: "을 출력한 후 사용자로부터 정수를 입력받기 위함 
    char inputStr[15]; //사용자로부터 이름, 전화번호, 이메일, 파일명 등을 입력받기 위함 
    Info numOfUser[10]; //최대 입력 가능 전화번호 수는 10개 

    for (i = 0; i < 10; i++) {
        strcpy(numOfUser[i].telNumber, "0"); //전화번호를 모두 0으로 설정 
    }

    while(1) {
    	i = 0;
        printf("\n-- Telephone Book Menu --\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print All\n");
        printf("5. Save\n");
        printf("6. Exit\n");
        printf("Choose the item: ");
        scanf(" %d", &inputNum); //사용자로부터 정수를 입력받음 
        if (inputNum == 1) { //사용자가 1을 입력했을 때 
            while (i < 10) {
                if (strcmp(numOfUser[i].telNumber, "0") == 0) { //(i+1)번째 정보의 전화번호가 "0"과 일치하면 정보를 입력받아 저장 
                    printf("[INSERT]\n");
                    printf("Input Name: ");
                    scanf(" %s", &numOfUser[i].name);
                    printf("Input Tel. Number: ");
                    scanf(" %s", &numOfUser[i].telNumber);
                    printf("Input Email Address: ");
                    scanf(" %s", &numOfUser[i].emailAddress);
                    break;
                }
                else if ((strcmp(numOfUser[i].telNumber, "0") != 0) && (i == 9)) {
				//전화번호가 입력받은 문자열과 같지 않고, i가 9일 때. 더이상 만족하는 값이 존재X 
                    printf("The list of phone numbers is full\n");
                }
                i++;
            }
        }
        else if (inputNum == 2) { //사용자가 2를 입력했을 때 
            printf("[DELETE]\n");
            printf("Input Name to Delete: ");
            scanf(" %s", &inputStr);
            while (i < 10) {
                if (strcmp(numOfUser[i].name, inputStr) == 0) { //(i+1)번째 정보의 이름이 입력받은 문자열과 같을 때 
                	strcpy(numOfUser[i].name, "0");
                	strcpy(numOfUser[i].telNumber, "0");
                	strcpy(numOfUser[i].emailAddress, "0"); //이름, 전화번호, 메일주소를 각각 "0"으로 초기화 
                    printf("Data for Name \"%s\" is deleted\n", inputStr);
                    break;
                }
                else if ((i == 9) && strcmp(numOfUser[i].name, inputStr) != 0) { //이름이 입력받은 문자열과 같지 않고, i가 9일 때. 더이상 만족하는 값이 존재X 
                    printf("Error: No data found for Name \"%s\"\n", inputStr);
                }
                i++;
            }
        }
        else if (inputNum == 3) { //사용자가 3을 입력했을 때 
        	printf("[SEARCH]\n");
        	printf("Input Name to Search: ");
        	scanf(" %s", &inputStr);
            while (i < 10) {
                if (strcmp(numOfUser[i].name, inputStr) == 0) { //(i+1)번째 정보의 이름이 입력받은 문자열과 같을 때 
                    printf("Num.  Name       Tel             Email\n");
                    printf("---------------------------------------\n");
                    printf("[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress); //정보 출력 
                    break;
                }
                else if ((i == 9) && strcmp(numOfUser[i].name, inputStr) != 0) { //이름이 입력받은 문자열과 같지 않고, i가 9일 때. 더이상 만족하는 값이 존재X 
                	printf("Error: No data found for Name \"%s\"\n", inputStr);
                }
                i++;
            }
        }
        else if (inputNum == 4) { //사용자가 4를 입력했을 때 
        	printf("[Print All Data]\n");
        	printf("Num.  Name       Tel             Email\n");
        	printf("---------------------------------------\n");
        	while (i < 10) {
        		if (strcmp(numOfUser[i].telNumber, "0") != 0) { //(i+1)번째 정보의 전화번호가 0이 아닐 때 
        			printf("[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress);
				}
				i++;
			}
        }
        else if (inputNum == 5) { //사용자가 5를 입력했을 때 
        	printf("[Save to File]\n");
        	printf("Input file name to save: ");
        	scanf(" %s", inputStr);
            FILE * fp = fopen(inputStr, "wt");
            fputs("Num.  Name       Tel             Email\n", fp);
            fputs("---------------------------------------\n", fp);
        	while (i < 10) {
        		if (strcmp(numOfUser[i].telNumber, "0") != 0) { //(i+1)번째 정보의 전화번호가 0이 아닐 때 
        			fprintf(fp, "[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress);
				}
				i++;
			}
            fclose(fp);
        	printf("Telephone Book \"%s\" is saved\n", inputStr);
        }
        else if (inputNum == 6) { //사용자가 6을 입력했을 때 
            printf("Exit, thanks you!");
            break; //프로그램 종료 
        }
    }
}
