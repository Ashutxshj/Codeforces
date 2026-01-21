n=int(input())
if n==1:
    print(1)
elif n<4:
    print("NO SOLUTION")
else:
    a=[]
    for i in range(1,n+1):
        if i%2==0:
            a.append(i)
    for i in range(1,n+1):
        if i%2!=0:
            a.append(i)
    print(*a)
# 1 2 3 4
# 2 4 1 3
