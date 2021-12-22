print("Введите числа A и B (A > B)")
A, B = [int(x) for x in input().split()]
while A >= B:
    A -= B
print("Длина незанятой части отреза =", A)