
def get_all_substrings(input_string):
    length = len(input_string)
    return [input_string[i:j+1] for i in xrange(length) for j in xrange(i,length)]

def check_anagram(s1,s2):
    return sum(map(ord, s1)) == sum(map(ord, s2))

test=int(raw_input(""))
while test>0:
    a=raw_input("")
    count,i,j=0,0,0
    substr=get_all_substrings(a)
    length=len(substr)
    while i<length-1:
        j=i+1
        while j<length:
            #print "i ",i," j ",j," ii ",substr[i]," jj ",substr[j]
            if check_anagram(substr[i],substr[j]):
                #print substr[i],substr[j]  
                count=count+1;
            j=j+1
        i=i+1
    print count
    test=test-1
