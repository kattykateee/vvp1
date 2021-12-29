N = int(input("Введите размер массива: "))
print("Введите эелементы массива: ")
A = []
for i in range(N):
    A.append(int(input()))
loc_max = A[-1]
for i in range(len(A)-2, -1, -1):
    if A[i] > loc_max:
        loc_max = A[i]
    else:
        break
print(loc_max)
