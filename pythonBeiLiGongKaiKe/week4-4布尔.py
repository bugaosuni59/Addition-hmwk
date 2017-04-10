#and or not 与或非
#任何非零值都可作为true
#bool("")是假
if 1:
    print(1)
if not 0:
    print(0)
if "":
    print("A")
if "0":
    print("B")
ans=input("input str:")
s1=ans or "abc"
#s1=input("input str:") or "abc"
print(s1)
#若ans为空 则s1=abc 否则为ans字符串