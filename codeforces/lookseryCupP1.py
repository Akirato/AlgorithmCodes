m_n=raw_input("")
m,n=int(m_n.split()[0]),int(m_n.split()[1])
l,t=[],m
count=0
while m>0:
    a=raw_input("")
    l.append(list(a)) 
    m=m-1
m=t
for i in range(0,m):
    for j in range(0,n):
	if l[i][j] in ['f','a','c','e']:
	    if (i < m-1) and (j < n-1):
#	         print 1,i,j,m,n
	         fin = l[i][j]+l[i+1][j+1]+l[i+1][j]+l[i][j+1]
                 if (('f' in fin) and ('a' in fin) and ('c' in fin) and ('e' in fin)):
		     count=count+1
print count        
