#else 必须在 finally 前
#没有异常则会继续执行else
#常见error：
# ValueError
# NameError
# TypeError
# SyntaxError

for i in range(1):
    try:
        x=int(input("enter num:"))
        # break
    except ValueError as e:
        print(e)
        print("no valid error")
    else:
        print("en?")
    finally:
        print("over")

