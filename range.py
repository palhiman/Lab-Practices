# range of integers

L,R = map(int, input().split())

for i in range(R-L+1):
    print(i+L, end=' ')
