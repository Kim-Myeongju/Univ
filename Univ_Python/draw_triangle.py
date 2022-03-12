import turtle
t = turtle.Turtle() #turtle.Pen()=turtle.Turtle()
t.shape("turtle")
t.pencolor("blue")
t.width(4)

length = 200 #200에 대한 참조값이 변수length에 저장됨
degree = 60

'''
t.forward(length)
t.left(degree)
t.forward(length)
t.left(degree)
t.forward(length)
'''

for i in [0,1,2,3,4,5]: #[]:list
    t.forward(length)
    t.left(degree)