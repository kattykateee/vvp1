print("Введите целое число N")
N = int(input())
quatr = 0
for i in range(1, N+1):
    quatr = quatr + i*2-1
    print(quatr)
print(quatr)