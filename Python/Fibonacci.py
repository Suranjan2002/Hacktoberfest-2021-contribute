#Take Input From User how many times to run the loop
N=int(input())

while N!=0:
    t=int(input())
    def fib(t):
        if t==0:
            return 0
        if t==1:
            return 1
        else:
            return fib(t-1)+fib(t-2)
    for i in range(t):
        z=fib(i)
        print(z,end=" ")
    print()
    N=N-1