n=int(input())
a=[]
while n>0:
    a.append(int(input()))
    n-=1

b=[]
pulse=0
minus=0
for i in range(len(a)-1):
    if a[i+1]-a[i]>0:
        b.append(a[i])
        pulse+=1
    elif a[i+1]-a[i]<0:
        b.append(a[i])
        minus+=1
    if pulse!=0 and minus!=0:
        b.append(a[i+1])
        break


for i in range(len(b)):
    if b[i]==min(b):
        key=i        

afterpart=[]
for i in range(key,len(a)):
    afterpart.append(a[i])


print(max(afterpart))

# I got it!!!
# I'll do coding tomorrow.














# print(a)
