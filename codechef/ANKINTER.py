def check(li):
    for i in range(0,len(li)-1):
	if li[i+1]-li[i] != 1:
	    return 0
    return 1

test = int(raw_input(""))
while test>0:
    test=test-1
    cont = 0
    n_w=raw_input("")
    n,w=int(n_w.split()[0]),int(n_w.split()[1])
    li=raw_input("").split()
    oi=[]
    for i in li:
        oi.append(int(i))
    for i in range(0,len(oi)-w+1):
	for j in range(i+w,len(oi)+1):
            a = oi[i:j]
            a.sort()
	    if len(a)!=0 and check(a)==1:
		cont += 1
    print cont


