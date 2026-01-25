t=int(input())
def solve(n,a):
    cnt=0
    for i in range(n):
        cnt+=(a[i]%2!=(i+1)%2)
    if cnt==0 or cnt==n:
        print("YES")
    else:
        print("NO")
while t>0:
    n1=int(input())
    a1=list(map(int,input().split()))
    solve(n1,a1)
    t-=1