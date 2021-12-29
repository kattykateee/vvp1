print("Введите целое число N")
N = int(input())
print("Введите два первых элемента массива")
A, B = [int(x) for x in input().split()]
array = [A, B]
i = 0
while len(array) < N:
    i = sum(array)
    array.append(i)
if len(array) == N:
    print(array)