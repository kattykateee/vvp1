N = int(input("Введите размер массива: "))
A = []
for _ in range(N):
    A.append(input("Введите элементы массива: "))
K, L = [int(x) for x in input("Введите два целых числа: ").split()]
array = A[K: L+1]
result = [int(x) for x in array]
print(sum(result)/len(result))