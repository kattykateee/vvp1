N = int(input("Введите размер массива: "))
A = []
for _ in range(N):
    A.append(int(input()))
result = []
print(A[0], A[-1], A[1], A[-2], A[2], A[-3])