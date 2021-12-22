print("Введите вещественное число A")
A = float(input())
print("Введите целое число N")
N = int(input())
result = 1
for i in range(1, N+1):
    result = result + A**i
print(result)
