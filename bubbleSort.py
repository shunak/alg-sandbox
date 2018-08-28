N = int(input())

A = list(map(int, input().split()))


flag=1
count=0
while flag:
    flag = 0
    for j in range(1,N):
        if A[j]<A[j-1]:
            v = A[j-1]
            A[j-1]=A[j]
            A[j]=v
            count+=1
            flag=1

a=list(map(str,A))

a=' '.join(a)

print(a)
print(count)


