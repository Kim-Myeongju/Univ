﻿##
#	이 프로그램은  구의 부피를 계산한다. 
#

# 사용자에게 구의 반지름을 입력하도록 한다. 구의 반지름을 문자열에서 실수로 변환한다. 
r = float(input("반지름을 입력하시오: "))

# 구의 부피를 공식을 이용하여 계산한다. 
volume = (4.0/3.0) * 3.141592 * r**3

# 구의 부피를 화면에 출력한다. 
print("구의 부피=",volume)