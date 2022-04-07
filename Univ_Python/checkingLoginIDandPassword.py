##
# HW NUMBER : 1
# FILE NAME : checkingLoginIDandPassword.py
# AUTHOR :
#   학과 & 학년: 컴퓨터공학과 1학년
#   학번 & 이름: C211026 김명주
# YYYYMMDD : 2022.04.07
# PURPOSE : 수업시간에 다룬 Lab: Validating user id and password 프로그램 확장, 실행
#

import sys    # sys모듈을 import

id_list = ['user1', 'user2']                        # id_list에 기존 아이디 저장
PASSWORD = 'abcd1234'                               # 비밀번호를 상수로 지정함

id = input("Type in your user ID or 'quit': ")      # user ID 입력받기

if id == 'quit':                                    # 사용자가 'quit'를 입력했을 때, 프로그램 종료
    print("This program is ended.")
    sys.exit()
elif id in id_list:                                 # 입력 받은 id가 id_list 안에 저장되어 있을 때
    while True:
        password = input("Type in your password or 'quit': ")    # 비밀번호(password) 입력 받기
        if password == 'quit':                      # 사용자가 'quit'를 입력했을 때, 프로그램 종료
            print("This program is ended.")
            sys.exit()
        elif password == PASSWORD:                  # 입력 받은 비밀번호(password)가 PASSWORD와 일치할 때
            print(f"Welcome {id}!")
            sys.exit()                              # 환영 메시지 출력 후 프로그램 종료
        else:                                       # 입력 받은 비밀번호(password)가 PASSWORD와 일치하지 않을 때, 경고 메시지 출력
            print("Your password is incorrect!")
else:                                               # 입력 받은 id가 id_list 안에 저장되어 있지 않을 때
    print("You are a new user. Your ID is entered as a new user")
    id_list.append(id)                              # id_list에 입력 받은 id 값을 추가
    while True:
        password = input("Type in your password or 'quit': ")    # 비밀번호(password) 입력 받기
        if password == 'quit':                      # 사용자가 'quit'를 입력했을 때, 프로그램 종료
            print("This program is ended.")
            sys.exit()
        elif password == PASSWORD:                  # 입력 받은 비밀번호(password)가 PASSWORD와 일치할 때
            print(f"Welcome {id}!")
            sys.exit()                              # 환영 메시지 출력 후 프로그램 종료
        else:                                       # 입력 받은 비밀번호(password)가 PASSWORD와 일치하지 않을 때, 경고 메시지 출력
            print("Your password is incorrect!")
