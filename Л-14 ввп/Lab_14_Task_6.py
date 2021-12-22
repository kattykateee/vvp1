print("Введите целое число N (> 1), N - число Фибоначчи")
N = int(input())
F1 = 1
F2 = 1
F_sum = 0
i = 1
while N > 0:
    F_sum = F1 + F2
    N -= F1
    F1 = F2
    F2 = F_sum
    i += 1
print(i)

