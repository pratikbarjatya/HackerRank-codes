n=input()
m=input()
count =0
for i in range(n,m+1):
	ll=len(str(i))
	k=i**2
	kk=str(k)
	l=len(kk)
	lll=list(kk[l-ll:l])
	llll=list(kk[:l-ll])
	try:
		kkkk= (int("".join(lll)) + int("".join(llll)))
	except:
		kkkk=int("".join(lll))
	if(kkkk==i):
		count+=1
		print i,
if count==0:
	print "INVALID RANGE"
