def main1():
    file = "a.txt"
    infile = open(file,"r")
    sum=0
    count=0
    for line in infile:
        sum+=eval(line)
        count+=1
    print("ave=",sum/count)
    print("ave=%.2f"%(sum/count))
def main2():
    file = "a.txt"
    infile = open(file,"r")
    sum=0
    count=0
    line = infile.readline()
    while line!="":
        print(line)
        line = infile.readline()
main2()