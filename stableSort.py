N=int(input())

c = list(map(str, input().split()))
# d = list(map(str, input().split()))
import copy
# ポインタではなく、値を渡す
d = copy.deepcopy(c)
default = copy.deepcopy(c)





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
        for j in range(i,N_):
            if C_[j][1:2] < C_[minj][1:2]:
                minj = j
        t=C_[i]
        C_[i]=C_[minj]
        C_[minj]=t
    
    return C_

def getCommon(C_,N_):
    common=[]
    for i in range(N):
        for j in range(i,N):
            if C_[i][1:2]==C_[j][1:2] and i!=j:
                common.append([C_[i],C_[j]])

    for val in common:
        ret = val

    return ret


b = bubble(c,N)
a = selection(d,N)
gc = getCommon(default,N)






print(a)
print(b)
print(gc)



# print(getCommon(b,N))

# print(getCommon(a,N))

# print(getCommon(b,N))










# cb = ' '.join(bubble(c,N)

# cs = ' '.join(selection(c,N))

# a = selection(c,N)
# b=[]
# for i in range(len(a)):
    # print(a[i][1:2])
    # if a[i] not in b[i][1:2]:
        # b.append(a[i])
    #     a.pop(a[i])
    #     print(a)











# print(a)
# print(b)


# print(a[1])
# print(a[2])




# print(selection(c,N))


# b=[]
# for i in a[1:2]:
#     print(i)
    # if i not in b:
    #     b.append(i)


# print(i)

# print(cs)

# print(c)









# pt2
# print(C[:1:])












# print(C)




