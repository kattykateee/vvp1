print("Введите A и B")
A, B = [int(x) for x in input().split()]
for i in range(A, B+1):
    print((str(i)+" ")*i)
