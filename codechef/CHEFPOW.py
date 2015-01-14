import math

def power_two(n):
    return 2**int(math.log(n, 2))

num=int(raw_input(""))
a=[]
while num>0:
    po=power_two(num)
    a.append(po)
    num=num-po

a.sort()

for i in range(0,len(a)-1):
    print a[i],

print a[len(a)-1]
