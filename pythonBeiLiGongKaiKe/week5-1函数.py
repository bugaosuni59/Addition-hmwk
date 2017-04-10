def add1(x):
    x+=1
    return x
def sing(person):
    print("666",person)
    person="hahaha"
    return None
def sumdiff(x,y):
    sum=x+y
    diff=x-y
    return sum,diff
x = 1
person="h"
add1(x)#值传递
print(x)
sing(person)#值传递
#注意：列表和图形不是值传递哦
print(person)
x=3;y=2
x,y=sumdiff(x,y)
print(x,y)

