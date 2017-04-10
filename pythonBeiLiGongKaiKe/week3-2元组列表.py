#元组 tuple
t1=123,456,"hello",(123,456)
t2=()#空的
t3=123,
#元组中可以有不同类型，元组也可以作为元素，存在先后关系
t1[0]
t1[0:3]
print(t1+t3*2),
t1+=t3
#元组定义后不可更改，也不可删除！！

#列表list
#可随机访问，可修改，可代替元组
#可+可*可len()可[m:n]可for var in list
#str可用：str[2:] str[:3] 即从……到尾，从头到…… 元组和list也可以这么搞
#list可使用的方法：
#<list>.append(x)将元素x加入到列表的最后
#<list>.sort()将列表元素排序
#<list>.reverse()将列表元素反转
#<list>.index(x)返回第一次出现元素x的索引值
#<list>.insert(i,x)在位置i处插入新元素x
#<list>.count(x)返回元素x在列表中出现的数量
#<list>.remove(x)删除列表中第一次出现的x
#<list>.pop(i)取出列表中位置为i的元素并删除它
print("hello world ya ho".split()),


