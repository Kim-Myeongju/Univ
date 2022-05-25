#include <stdio.h>
#include <string.h>

typedef struct info { //name, telNumber, emailAddress�� ����� ������ ����ü 
    char name[15];
    char telNumber[15];
    char emailAddress[30];
} Info;

int main() {
    int i = 0; //for��, while���� ������ �� ��� 
    int inputNum = 0; //"Choose the item: "�� ����� �� ����ڷκ��� ������ �Է¹ޱ� ���� 
    char inputStr[15]; //����ڷκ��� �̸�, ��ȭ��ȣ, �̸���, ���ϸ� ���� �Է¹ޱ� ���� 
    Info numOfUser[10]; //�ִ� �Է� ���� ��ȭ��ȣ ���� 10�� 

    for (i = 0; i < 10; i++) {
        strcpy(numOfUser[i].telNumber, "0"); //��ȭ��ȣ�� ��� 0���� ���� 
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
        scanf(" %d", &inputNum); //����ڷκ��� ������ �Է¹��� 
        if (inputNum == 1) { //����ڰ� 1�� �Է����� �� 
            while (i < 10) {
                if (strcmp(numOfUser[i].telNumber, "0") == 0) { //(i+1)��° ������ ��ȭ��ȣ�� "0"�� ��ġ�ϸ� ������ �Է¹޾� ���� 
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
				//��ȭ��ȣ�� �Է¹��� ���ڿ��� ���� �ʰ�, i�� 9�� ��. ���̻� �����ϴ� ���� ����X 
                    printf("The list of phone numbers is full\n");
                }
                i++;
            }
        }
        else if (inputNum == 2) { //����ڰ� 2�� �Է����� �� 
            printf("[DELETE]\n");
            printf("Input Name to Delete: ");
            scanf(" %s", &inputStr);
            while (i < 10) {
                if (strcmp(numOfUser[i].name, inputStr) == 0) { //(i+1)��° ������ �̸��� �Է¹��� ���ڿ��� ���� �� 
                	strcpy(numOfUser[i].name, "0");
                	strcpy(numOfUser[i].telNumber, "0");
                	strcpy(numOfUser[i].emailAddress, "0"); //�̸�, ��ȭ��ȣ, �����ּҸ� ���� "0"���� �ʱ�ȭ 
                    printf("Data for Name \"%s\" is deleted\n", inputStr);
                    break;
                }
                else if ((i == 9) && strcmp(numOfUser[i].name, inputStr) != 0) { //�̸��� �Է¹��� ���ڿ��� ���� �ʰ�, i�� 9�� ��. ���̻� �����ϴ� ���� ����X 
                    printf("Error: No data found for Name \"%s\"\n", inputStr);
                }
                i++;
            }
        }
        else if (inputNum == 3) { //����ڰ� 3�� �Է����� �� 
        	printf("[SEARCH]\n");
        	printf("Input Name to Search: ");
        	scanf(" %s", &inputStr);
            while (i < 10) {
                if (strcmp(numOfUser[i].name, inputStr) == 0) { //(i+1)��° ������ �̸��� �Է¹��� ���ڿ��� ���� �� 
                    printf("Num.  Name       Tel             Email\n");
                    printf("---------------------------------------\n");
                    printf("[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress); //���� ��� 
                    break;
                }
                else if ((i == 9) && strcmp(numOfUser[i].name, inputStr) != 0) { //�̸��� �Է¹��� ���ڿ��� ���� �ʰ�, i�� 9�� ��. ���̻� �����ϴ� ���� ����X 
                	printf("Error: No data found for Name \"%s\"\n", inputStr);
                }
                i++;
            }
        }
        else if (inputNum == 4) { //����ڰ� 4�� �Է����� �� 
        	printf("[Print All Data]\n");
        	printf("Num.  Name       Tel             Email\n");
        	printf("---------------------------------------\n");
        	while (i < 10) {
        		if (strcmp(numOfUser[i].telNumber, "0") != 0) { //(i+1)��° ������ ��ȭ��ȣ�� 0�� �ƴ� �� 
        			printf("[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress);
				}
				i++;
			}
        }
        else if (inputNum == 5) { //����ڰ� 5�� �Է����� �� 
        	printf("[Save to File]\n");
        	printf("Input file name to save: ");
        	scanf(" %s", inputStr);
            FILE * fp = fopen(inputStr, "wt");
            fputs("Num.  Name       Tel             Email\n", fp);
            fputs("---------------------------------------\n", fp);
        	while (i < 10) {
        		if (strcmp(numOfUser[i].telNumber, "0") != 0) { //(i+1)��° ������ ��ȭ��ȣ�� 0�� �ƴ� �� 
        			fprintf(fp, "[%d]   %s        %s    %s\n", i+1, numOfUser[i].name, numOfUser[i].telNumber, numOfUser[i].emailAddress);
				}
				i++;
			}
            fclose(fp);
        	printf("Telephone Book \"%s\" is saved\n", inputStr);
        }
        else if (inputNum == 6) { //����ڰ� 6�� �Է����� �� 
            printf("Exit, thanks you!");
            break; //���α׷� ���� 
        }
    }
}
