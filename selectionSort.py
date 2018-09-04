N = int(input())

A = list(map(int, input().split()))


count=0
for i in range(0,N):
    minj = i
    for j in range(i,N):
        if A[j] < A[minj]:
            minj = j
    buf = A[minj]
    A[minj] = A[i] 
    A[i] = buf
    if i!=minj:
        count+=1

a = list(map(str,A))
a = ' '.join(a)

print(a)
print(count)










