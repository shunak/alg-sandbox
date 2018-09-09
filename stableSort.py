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
        for j in range(i+1,N):
            if C_[i][1:2]==C_[j][1:2]:
                common.append([C_[i],C_[j]])
                break



    # if common:
    #     for val in common:
    #         ret = val
    # elif not common:
    #     ret = common        

    return common

    

# get gc num
# gcn = gc[1][1:2]
# print(gcn)

def getOrder(x_,gc_):
    # get each num
    gcn = gc_[0][1:2]
    order=[]
    for i in range(len(x_)):
        if x_[i][1:2]==gcn:
            order.append(x_[i])
    return order

# if for k in range(lne())
def judgeStability(alg_, eo_):
    if alg_ == eo_:
        print("Stable")    
    else:
        print("Not stable")

b = bubble(c, N)
s = selection(d, N)
gc = getCommon(default, N)

# print(gc)
k=0
count =0
for i in range(len(gc)-k):
    for j in range(i+1,len(gc)-k):
        if gc[i][1]==gc[j][0]:
            gc[i].extend(gc[j])
            gc[j][0]=0
            count+=1


while count>0:
    for val in gc:
        if val[0]==0:
            gc.remove(val)
            count-=1

# Think Another Way.
# for val in gc:
#     if val[0]==0:
#         gc.remove(val)
# 
# def rem(gc_):
#     for val in gc_:
#         if val[0] == 0:
#             gc_.remove(val)
#     rem(gc_)








print(gc)












if gc:
    beo = getOrder(b, gc)
    seo = getOrder(s, gc)
    
    b = ' '.join(b)
    s = ' '.join(s)

    print(b)
    judgeStability(beo, gc)
    print(s)
    judgeStability(seo, gc)
else:

    b = ' '.join(b)
    s = ' '.join(s)

    print(b)
    print("Stable")
    print(s)
    print("Stable")











# print(b)
# print(s)
# print(gc)



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




