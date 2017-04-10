#ascii 码转换函数
ord('a')#ascii转int
chr(97)#int转ascii
#unicode 2字节 gbk中文专用2字节
#utf-8可变长unicode 1~3字节
s="字符串"
bs=s.encode("utf-8")
print(bs)
print(bs.decode())
# r只读 w只写 a追加 rb wb ab二进制 r+读写
file = open("a.txt","r")

#print(file.read())#读取整个文件作为一个字符串
# print(file.readline())#读取下一行内容
# print(file.readlines())#读取整个文件，作为列表，每个元素一行
for i in range(5):
    print(file.readline()[:-1])
#遍历文件方法：
# for line in file.readlines():
#     xxx
# for line in file:
#   outfile.write(line)
#     xxx
outfile = open("b.txt","a")
#outfile.writelines(["hello"," ","world"])
outfile.write()
