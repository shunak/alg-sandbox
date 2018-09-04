N=int(input())

c = list(map(str, input().split()))

# card 
# get partial str by "slice"

def bubble(C_,N_):
    for i in range(0, N_):
        for j in range(N_-1,i,-1):
            if C_[j][1:2] < C_[j-1][1:2]:
                t=C_[j]
                C_[j]=C_[j-1]
                C_[j-1]=t
    return C_


def selection(C_,N_):
    for i in range(N_):
        minj = i
        for j in (i,N_):
            if C_[j][1:2] < C_[minj][1:2]:
                minj = j
        t=C_[i]
        C_[i]=C_[minj]
        C_[minj]=t
    
    return C_

# cb = ' '.join(bubble(c,N))

cs = ' '.join(selection(c,N))

print(cs)

# print(c)









# pt2
# print(C[:1:])












# print(C)




