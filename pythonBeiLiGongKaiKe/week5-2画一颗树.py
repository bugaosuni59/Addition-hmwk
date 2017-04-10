from turtle import *
def test():
    p= Turtle()
    p.speed(1)#画笔速度
    p.pensize(5)
    p.color("black",'yellow')
    p.begin_fill()
    for i in range(6):
        p.forward(50)
       # p.right(144)
        p.right(60)
    p.end_fill()

def tree(plist,l,a,f):
    if l>5:
        lst=[]
        for p in plist:
            p.forward(l)
            q=p.clone()
            p.left(a)
            q.right(a)
            lst.append(p)
            lst.append(q)
        tree(lst,l*f,a,f)

def maketree(x,y):
    p=Turtle()
    p.speed(1)
    p.color("green")
    p.pensize(5)
    p.hideturtle()
    p.getscreen().tracer(30,0)
    p.left(90)
    p.goto(x,y)
    p.pendown()
    t=tree([p],110,65,0.6375)

def main():
   maketree(-200,-200)
   maketree(0,0)
   maketree(200,-200)

main()

