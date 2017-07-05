l0=list(map(int,raw_input().split(" ")))
n=l0[0]
m=l0[1]
l1=list(map(int,raw_input().split(" ")))
l2=list(map(int,raw_input().split(" ")))
#print l1
#print l2
l3=[]
l4=[]
for i in range(l1[n-1],l2[0]+1):
    count=0
    for j in range(n):
        if i%l1[j]==0:
            count+=1
            if count==n:
                l3.append(i)
#print l3
for i in range(l1[n-1],l2[0]+1):
    count=0
    for j in range(m):
        if l2[j]%i==0:
            count+=1
            if count==m:
                l4.append(i)
#print l4
count =0
for i in l3:
    for j in l4:
        if i==j:
            count+=1
print count