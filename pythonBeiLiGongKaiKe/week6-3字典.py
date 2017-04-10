#注意：字典是无序的
pswd={"usr1":"6","usr2":"a"}
print(pswd)

#往字典添加东西：
pswd["usr3"]="b"
print(pswd)
#删除
del pswd["usr1"]
#遍历键、值、项
for key in pswd:
    print(key+":"+str(pswd[key]))
for value in pswd.values():
    print(value)
for item in pswd.items():
    print(item)
for key,value in pswd.items():
    print(key,value)
print("usr2"in pswd)#判断[键]是否在字典
print("b"in pswd)
#字典方法：
#keys():返回所有key的tuple
#valus():返回所有values的tuple
#items():返回包含所有key，value的列表
#clear():清空
#get(key):返回键对应值
#pop(key):删掉并返回key对应值
#update(小字典):把小字典加入大字典中
