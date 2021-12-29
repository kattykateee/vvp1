N = int(input("Введите раpмер массива: "))
print("Введите элементы массива: ")
A = []
for i in range(N):
    A.append(int(input()))
chet = []
for ind in range(1, N, 2):
    chet.append(A[ind])
print(min(chet))
