##
# HW NUMBER : 3
# FILE NAME : verifyCommonItemsBetweenLists.py
# AUTHOR :
#   학과 & 학년: 컴퓨터공학과 1학년
#   학번 & 이름: C211026 김명주 
# YYYYMMDD : 2022.05.05
# PURPOSE : 두 개의 리스트로부터 공통 항목을 찾는 프로그램
#

##
# The following function : 
# 	receives two lists via two parameters, 
# 	compares these lists, 
# 	checks whether there is at least a common item between them,
# 	counts the total number of common items between them,
# 	and returns two output values.

def verifyCommonItems(list1, list2):
    result = False # 공통 구성원이 하나 이상 있는지 여부를 나타냄
    count = 0      # 공통 구성원이 몇 개 있는지 나타냄
    for i in range(len(list1)): # list1의 원소 수만큼 for문 반복(i가 0부터 (len(list1)-1)까지)
        for j in range(len(list2)): # list2의 원소 수만큼 for문 반복(j가 0부터 (len(list2)-1까지)
            if (list1[i] == list2[j]): # list1[i]와 list2[j]에 해당하는 값이 같을 때
                result = True # 공통 구성원이 하나 이상 있으므로 result값을 True로 변경
                count += 1 # 공통 구성원을 새로 찾았으므로 기존 개수에서 1을 더함
    return result, count # result와 count에 해당하는 값을 반환


##
# The following function : 
#	receives two lists via two parameters,
# 	generates a new list - list3, consisting of common items between two lists, by only the List Comprehensions method,  
# 	sorts this new list in ascending and decending order by the sort() method, and
# 	returns the list3, sorted in ascending order and the list4, sorted in descending order.
# The List Comprehensions method can be refered on p.282 on the textbook.

def getSortedCommonItems(list1, list2):
    list3 = [list1[i] for i in range(len(list1)) for j in range(len(list2)) if list1[i] == list2[j]]
    # 리스트 함축을 사용하여 리스트 생성
    # list1[i] == list2[j]이면, 즉 공통 구성원이라면 그 list1[i]의 값을 list3에 저장. for문에 의해 i는 0부터 (len(list1)-1)까지, j는 0부터 (len(list2)-1)까지 반복
    list4 = list(list3) # 공통 구성원을 저장한 리스트 list3을 deep copy (깊은 복사)
    list3.sort() # 공통 구성원을 저장한 리스트를 작은 수부터 정렬
    list4.sort(reverse = True) # 공통 구성원이 들어있는 list4를 큰 수부터 정렬
    return list3, list4 # ascending order, descending order에 해당하는 리스트를 각각 반환

def main():
    list1 = [10, 30, 50, 70, 90, 20, 40, 60, 80, 100, 120] # 초기값을 가진 리스트 (list1) 생성
    list2 = [30, 60, 90, 150] # 초기값을 가진 리스트 (list2) 생성

    print("The list1 is", list1) # list1 출력
    print("The list2 is", list2) # list2 출력
    result, count = verifyCommonItems(list1, list2) # 함수를 실행하여, 공통 구성원 존재 여부를 나타내는 변수, 공통 구성원의 개수를 나타내는 변수에 저장
    list3, list4 = getSortedCommonItems(list1, list2) # 함수를 실행하여, ascending order, descending order에 대한 리스트를 각각 변수에 저장
    print("There is at least a common item between two lists:", result) # 공통 구성원의 존재 여부를 나타내기 위한 출력
    print("Number of common item(s):", count) # 공통 구성원의 개수를 나타내기 위한 출력
    print("The list, consisting of common items between two lists, sorted in ascending order is", list3) # ascending order에 대한 리스트 출력
    print("The list, consisting of common items between two lists, sorted in descending order is", list4) # descending order에 대한 리스트 출력

main()