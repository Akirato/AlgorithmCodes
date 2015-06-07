import math
def checkAngle(v1,v2,v3):
    comm = math.sqrt(((v1[0]-v2[0])**2)+((v1[1]-v2[1])**2))*math.sqrt(((v3[0]-v2[0])**2)+((v3[1]-v2[1])**2))
    return math.acos((((v1[0]-v2[0])*(v3[0]-v2[0]))+((v1[1]-v2[1])*(v3[1]-v2[1])))/(comm))

test=int(raw_input(""))
while test>0:
    numberPoly=int(raw_input(""))
    polygons,count={},0
    for i in range(1,numberPoly+1):
	numberVertex=int(raw_input(""))
	Vertices=raw_input("").split()
	vertex=[]
	for j in range(0,numberVertex):
	    vertex.append((Vertices[2*j],Vertices[2*j+1]))
	polygons[i]=vertex
    for i in polygons.keys():
	count=0
        for j in polygons.keys():
	    if i!=j:
	        v2=polygons[j][0]
	        
	        
