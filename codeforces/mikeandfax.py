x=raw_input("")
num=raw_input("")
num=int(num)
chunks,chunk_size=len(x),len(x)/num
strings = [ x[i:i+chunk_size] for i in range(0, chunks, chunk_size) ]
#print strings
flag="YES"
for i in strings:
    if i!=i[::-1]:
        flag="NO"
if len(x)%num!=0:
	flag="NO"
print flag
