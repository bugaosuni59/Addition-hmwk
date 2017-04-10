val = input("温度：")# 获得输入，字符串
if (val[-1] in ['C', 'c']):# val[-1]是最后一个 val[0:2] 是0,1
    f = 1.8 * float(val[0:-1]) + 32# val[0,-1]是除了最后一个
    print("res=%.2fF" % f)
elif val[-1] in ['F', 'f']:
    c = (float(val[0:-1]) - 32) / 1.8
    print("res=%.2fC" % c)
else:
    print("wrong input")

#循环：
for i in range(10):
    print("1")


