print("Введите целое число N")
N = int(input())
array = []
i = 1
while len(array) < N:
    if i % 2 == 1:
        array.append(i)
    i += 1
if len(array) == N:
    print(array)