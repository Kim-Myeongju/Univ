## 
# 처음에는 '#' 두 개로 시작
#

speed = 300000.0 #빛의속도
distance = 40000000000000.0 #거리

secs = distance / speed
light_year = secs / (60.0*60.0*24.0*365.0)
#소수점 아래까지 출력하기 위해 정수.0이라고 씀

print(light_year, "광년")