m=raw_input("")
f=raw_input("")
g=raw_input("")
h=raw_input("")
i=raw_input("")
m=int(m)
h1,a1=int(f.split()[0]),int(f.split()[1])
x1,y1=int(g.split()[0]),int(g.split()[1])
h2,a2=int(h.split()[0]),int(h.split()[1])
x2,y2=int(i.split()[0]),int(i.split()[1])
a,b,i,flag1,flag2=[],[],0,0,0
a.append(h1)
b.append(h2)
while 1:
    i+=1
    h1=(x1*h1+y1)%m
    h2=(x2*h2+y2)%m
    if h1==a1:
	flag1=1
    if h2==a2:
        flag2=1
    if flag1==1 and flag2==1:
	break
    if h1 in a:
        break
    if h2 in b:
	break
    a.append(h1)
    b.append(h2)
if flag1==1 and flag2==1:
    print i
else:
    print "-1"
