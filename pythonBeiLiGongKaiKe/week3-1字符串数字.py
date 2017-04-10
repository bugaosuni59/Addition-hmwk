import sys

print(pow(2, 1.5))
# 0x9a 16进制
# 0b010 2进制
# 0o123 8进制
print(sys.float_info)  # 展示当前计算机的浮点数精度
z = 2.1 + 1.1 + 3.4j  # 实数虚数部分
print(z.real)
print(z.imag)
int(4.5)  # 4
float(5)  # 5.0
complex(4)  # 4+0j
# 强制转换函数
# 但是复数不能转化为整数、浮点数
x = z
print(type(x))  # 判断类型
# 运算符：
# +-*/ 注意/是不取整的
# // 这个是取整的
# a**b是计算a的b次
# divmod(x,y) 同时返回(x//y,x%y)
str1 = '\\\''
print(str1)
#字符串可进行 + 和 *操作
# +是拼接 *是重复n次
len(str1)#获取字符串长度
str(123.456)#强制转换
#应用：
months="JanFebMarAprMayJunJulAugSepOctNovDec"
pos=int(input("月份："))
print(months[pos*3-3:pos*3])
#字符串的操作方法格式：
#<string>.upper() 变大写
#<string>.lower()
#<string>.capitalize()首字母大写
#<string>.strip()去掉两边空格以及指定字符
#<string>.split()按指定字符分割字符串
#<string>.isdigit()判断字符串是否是数字
#<string>.find()搜索指定字符串
#<string>.replace()字符串替换
for ch in months:
    print(ch)
#遍历字符串









