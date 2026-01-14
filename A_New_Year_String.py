t=int(input())
def solve(n,s):
    if "2025" in s:
        if "2026" in s:
            print(0)
        else:
            print(1)
    else:
        print(0)
while t>0:
    n=int(input())
    s=str(input())
    solve(n,s)
    t-=1
