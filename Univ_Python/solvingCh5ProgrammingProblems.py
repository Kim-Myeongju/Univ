##
# HW NUMBER : 2
# FILE NAME : solvingCh5ProgrammingProblems.py
# AUTHOR :
#   학과 & 학년: 컴퓨터공학과 1학년
#   학번 & 이름: C211026 김명주
# YYYYMMDD : 2022.04.16
# PURPOSE : 점수에 따른 등급, 숫자를 한글로 변환, 최대공약수, 소수 출력 함수를 main()함수에서 차례대로 호출, 실행
#

def getGrade(score):                  # 점수에 따른 알파벳 등급을 출력하는 함수
    if (score >= 90):                 # 입력한 score가 90 이상일 때,
        print("The grade is A !")     # A 등급을 나타내는 문자열 출력
    elif (score >= 80):               # (score>=90)을 만족하지 못하며 score가 80 이상일 때,
        print("The grade is B !")     # B 등급을 나타내는 문자열 출력
    elif (score >= 70):               # (score>=80)을 만족하지 못하며 score가 70 이상일 때,
        print("The grade is C !")     # C 등급을 나타내는 문자열 출력
    elif (score >= 60):               # (score>=70)을 만족하지 못하며 score가 60 이상일 때,
        print("The grade is D !")     # D 등급을 나타내는 문자열 출력
    else:                             # (score>=60)을 만족하지 못했을 때,
        print("The grade is F !")     # F 등급을 나타내는 문자열 출력

def getMoneyText(amount):             # 1000이하의 숫자를 한글로 표기하는 함수
    
    for i in [1000, 100, 10, 1]:      # i는 자릿수에 대한 판단을 위해 사용할 것이므로 1000, 100, 10, 1으로 정함.
        if (i == 1000):               # i가 1000이면 unit에 "천"을 저장
            unit = "천"
        elif (i == 100):              # i가 100이면 unit에 "백"을 저장
            unit = "백"
        elif (i == 10):               # i가 10이면 unit에 "십"을 저장
            unit = "십"
        else:                         # i가 1이면 빈 문자열을 저장 (일의자리는 "일"이라는 단위를 나타내어 출력하지 않기 때문 ex. 오, 오십, 오백)
            unit = ""

        if (amount // i == 1):               # amount / (자릿수i) 가 1일 때, 즉 i자릿수가 1일 때
            if (i == 1):                     # 1의 자릿수라면 "일"이라는 글자가 출력되어야 하므로 "일" 출력
                print(f"일", end='')
            else:                            # 10, 100, 1000의 자릿수라면 "일"이라는 글자를 출력하지 않으므로 단위만 출력. 예를 들어 천, 백, 십
                print(f"{unit}", end='')
        elif (amount // i == 2):             # amount / (자릿수i) 가 2일 때, 즉 i자릿수가 2일 때
            print(f"이{unit}", end='')       # "이"와 단위를 함께 출력. 예를 들어 이백, 이십
        elif (amount // i == 3):             # amount / (자릿수i) 가 3일 때, 즉 i자릿수가 3일 때
            print(f"삼{unit}", end = '')     # "삼"과 단위를 함께 출력. 예를 들어 삼백, 삼십
        elif (amount // i == 4):             # amount / (자릿수i) 가 4일 때, 즉 i자릿수가 4일 때
            print(f"사{unit}", end = '')     # "사"와 단위를 함께 출력. 예를 들어 사백, 사십
        elif (amount // i == 5):             # amount / (자릿수i) 가 5일 때, 즉 i자릿수가 5일 때
            print(f"오{unit}", end = '')     # "오"와 단위를 함께 출력. 예를 들어 오백, 오십
        elif (amount // i == 6):             # amount / (자릿수i) 가 6일 때, 즉 i자릿수가 6일 때
            print(f"육{unit}", end = '')     # "육"과 단위를 함께 출력. 예를 들어 육백, 육십
        elif (amount // i == 7):             # amount / (자릿수i) 가 7일 때, 즉 i자릿수가 7일 때
            print(f"칠{unit}", end = '')     # "칠"과 단위를 함께 출력. 예를 들어 칠백, 칠십
        elif (amount // i == 8):             # amount / (자릿수i) 가 8일 때, 즉 i자릿수가 8일 때
            print(f"팔{unit}", end = '')     # "팔"과 단위를 함께 출력. 예를 들어 팔백, 팔십
        elif (amount // i == 9):             # amount / (자릿수i) 가 9일 때, 즉 i자릿수가 9일 때
            print(f"구{unit}", end = '')     # "구"와 단위를 함께 출력. 예를 들어 구백, 구십
        amount = amount - (amount//i)*i      # 다음 자릿수를 판단하기 위해 이미 실행된 자릿수는 뺄셈. (ex. 990-900 한 후 십의자리를 판단하기 위해.)
    print("원")                              # 숫자를 모두 출력한 후 단위인 "원"을 출력

def getGCD(integer1, integer2):              # 두 정수를 입력받아 최대공약수를 구하는 프로그램
    if (integer1 < integer2):                # 더 작은 수를 지역변수 num에 저장. 두 수의 최대공약수는 그중 더 작은 수보다 큰 값일 수 없기 때문
        num = integer1
    else:
        num = integer2
    
    while (num >= 1):                                         # num을 1씩 줄여가며 반복문 실행.
        if (integer2 % num == 0 and integer1 % num == 0):     # 두 정수가 num으로 나누어 떨어질 때, 이는 num에 해당하는 숫자가 최대공약수라는 의미
            print(f"The GCD between {integer1} and {integer2} is {num}!")     # 최대공약수를 알리는 문자열 출력
            break                                             # 최대공약수를 이미 찾았으므로 반복문 종료
        else:
            num -= 1                                          # 최대공약수를 찾지 못했으므로 num에 1을 뺀 후 다시 반복

def testPrime(n):                       # 소수를 출력하는 프로그램
    result = 1
    for j in range (1, n):              # j를 1부터 n-1까지 차례대로 대입하며 반복
        if (j != 1 and n % j == 0):     # 소수인지 판단할 정수 n을, 1이 아닌 j로 나누었는데 나누어 떨어진 경우
            result = 0                  # n이 소수가 아니라는 것이 판단되었으므로 result에 0 저장
            break                       # n이 소수가 아니므로 반복문을 더 실행하지 않아도 됨
    if (result == 1):                   # j가 1부터 n-1이 될 때까지 result가 1이라면,
        print(n, end = ' ')             # n은 소수라는 의미이므로 n을 출력

def main():                                            # main 함수

    print("Testing the solution to Problem4 =>")
    score = int(input("Type in a score: "))            # getGrade 함수에 대입할 변수를 입력받음
    getGrade(score)                                    # getGrade 함수 실행
    print('--'*40)                                     # 줄 띄우기

    print("Testing the solution to Problem8 =>")
    n = int(input("1000 이하의 금액을 입력하시오: "))   # getMoneyText 함수에 대입할 변수를 입력받음
    getMoneyText(n)                                    # getMoneyText 함수 실행
    print('--'*40)                                     # 줄 띄우기

    print("Testing the solution to Problem9 =>")
    x = int(input("Type in the 1st integer: "))        # getGCD 함수에 대입할 첫 번째 변수를 입력받음
    y = int(input("Type in the 2nd integer: "))        # getGCD 함수에 대입할 두 번째 변수를 입력받음
    getGCD(x, y)                                       # getGCD 함수 실행
    print('--'*40)                                     # 줄 띄우기
    
    print("Testing the solution to Problem10 =>")
    for i in range (2, 101):                           # i가 2부터 100일 때까지 차례대로 반복하며, 소수라면 testPrime 함수를 통해 그에 해당하는 i 값이 출력됨
        testPrime(i)                                   # testPrime 함수 실행

main()                                                 # main 함수 실행