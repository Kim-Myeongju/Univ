def main():
    scoreInput = int(input("점수를 입력하세요: "))
    amountInput = int(input("100이하의 금액을 입력하시오: "))
    firstIntInput = int(input("첫 번째 정수: "))
    secondIntInput = int(input("두 번째 정수: "))
    getGrade(scoreInput)
    getMoneyText(amountInput)
    getGCD(firstIntInput, secondIntInput)
    testPrime()


def getGrade(score):
    if (score >= 90):
        print("성적은 A 입니다")
    elif (score >= 80):
        print("성적은 B 입니다")
    elif (score >= 70):
        print("성적은 C 입니다")
    elif (score >= 60):
        print("성적은 D 입니다")
    else:
        print("성적은 F 입니다")

def getMoneyText(amount):
    
    if (amount == 1000):
        print("천원")
    else:
        for i in [100, 10, 1]:

            if (i == 100):
                unit = "백"
            elif (i == 10):
                unit = "십"
            else:
                unit = ""

            if (amount // i == 1):
                if (i == 1):
                    print(f"일", end=' ')
                else:
                    print(f"{unit}", end=' ')
            elif (amount // i == 2):
                print(f"이{unit}", end=' ')
            elif (amount // i == 3):
                print(f"삼{unit}", end = ' ')
            elif (amount // i == 4):
                print(f"사{unit}", end = ' ')
            elif (amount // i == 5):
                print(f"오{unit}", end = ' ')
            elif (amount // i == 6):
                print(f"육{unit}", end = ' ')
            elif (amount // i == 7):
                print(f"칠{unit}", end = ' ')
            elif (amount // i == 8):
                print(f"팔{unit}", end = ' ')
            elif (amount // i == 9):
                print(f"구{unit}", end = ' ')
            amount = amount - (amount//i)*i

        print("\b원")

def getGCD(integer1, integer2):
    if (integer1 < integer2):
        num = integer1
    else:
        num = integer2
    
    while (num >= 1):
        if (integer2 % num == 0 and integer1 % num == 0):
            print(num)
            break
        else:
            num -= 1

def testPrime(n):
    primeList = [2]
    result = 0

    for i in range(3, 101):
        for num in primeList:
            if (i % num == 0):
                result = 0
                break
            else:
                result = 1
        if result == 1:
            primeList.append(i)

    for j in primeList:
        print(j, end=' ')

main()