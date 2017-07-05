a=raw_input()
l=list(a)
if(l[8]=='A'):
	if(int(l[0])==1 and int(l[1])==2):
		l[0]=str(0)
		l[1]=str(0)
		print "".join(l[0:8])
		
	else:
		print "".join(l[0:8])
else:
	if(int(l[0])==1 and int(l[1])==2):
		print "".join(l[0:8])
	else:
		k=12+int(l[0]+l[1])
		l[0]=str(k)[0:1]
		l[1]=str(k)[1:2]
		print "".join(l[0:8])