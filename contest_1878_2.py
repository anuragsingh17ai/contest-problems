def main():
    t=int(input())
    while(t):
        t-=1
        n=int(input())
        k=1
        for i in range(n):
            print(k,end=' ')
            k+=2
        print()
main()