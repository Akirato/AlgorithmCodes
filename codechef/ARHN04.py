
test=int(raw_input(""))
while test>0:
    test=test-1
    mi=raw_input("")
    prob=mi.split('+')
    if len(prob)==2:
        a,b=prob
        print int(a)+int(b)
    else:
    	prob2=mi.split('-')
    	a,b=prob2
        print int(a)-int(b)
    
    
