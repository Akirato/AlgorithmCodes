# Program to get all function names from a C file.

import sys
if len(sys.argv) < 1: #Error if no argument
    print "Give the C file name as an argument"
    sys.exit(0)

fi = open(sys.argv[1],"r") #Open the file for reading
inpt = fi.read()

datatypes = ['int','void','struct','float','double','long int','long long int'] #Common datatypes to be removed
stack = []
stack2 = []
stack3 = []
a=""
for i in range(0,len(inpt)):

    if inpt[i] == '{': #Remove everything inside the function
        stack.append('{')
    if inpt[i] == '}':
        pp = stack.pop()
    if inpt[i] == '/' and inpt[i+1] == '*': #Remove the comments
        stack2.append('/*')
    if inpt[i] == '*' and inpt[i+1] == '/':
        pp = stack2.pop()
    if inpt[i] == '#': #Remove headers
        stack3.append('#')
    if inpt[i] == '\n' and len(stack3) > 0:
        pp = stack3.pop()
    if len(stack) == 0 and len(stack2)==0 and len(stack3) == 0 and inpt[i] != '}' and (inpt[i] != '*' and inpt[i] != '/'):  
        a = a + inpt[i]

a = a.split()
forRemoval = []
for i in a:
    if i in datatypes:
        forRemoval.append(i)
    if not ('(' in i):
        forRemoval.append(i)

for i in forRemoval:
    if i in a:
        a.remove(i)


for i in a:
    d = ''
    for p in i:
        if p == '(':
            break
        d = d + p
    print d



