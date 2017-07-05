n=input()
m=input()
l3=[]
l4=[]
for i in range(n,m+1):
    k=i**2
    l=list(map(int, str(k)))
    #print l
    #print int(''.join(map(str,l)))
    for p in range(len(i)):
        