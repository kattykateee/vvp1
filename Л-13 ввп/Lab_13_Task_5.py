print("Введите вещественное число A")
A = float(input())
print("Введите целое число N")
N = int(input())
result = 1
a = 1
for i in range(1, N+1, 1):
    a *= -A
    result += a
print(result)
