test=int(raw_input(""))
while test>0:
    test=test-1
    a=raw_input("")
    num1,num2=a.split()[0][::-1],a.split()[1][::-1]
    print str(int(num1)+int(num2))[::-1].lstrip("0")
