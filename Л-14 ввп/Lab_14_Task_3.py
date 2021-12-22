print("Введите N (> 1)")
N = int(input())
K = 0
minim = 1
summa = 0
while N >= K:
    summa += minim
    K = summa
    if N <= summa:
        print("Сумма =", summa, "наименьшее =", minim)
        break
    else:
        minim += 1