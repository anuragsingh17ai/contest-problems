def main():
    t=int(input())
    while(t):
        t-=1
        found=0
        ln,num=map(int,input().split())
        temp=map(int,input().split())
        for i in temp:
            if(i==num):
                found=1
        if found:
            print("YES")
        else:
            print("NO")
main()