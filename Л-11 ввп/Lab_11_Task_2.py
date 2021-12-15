print("Введите три числа")
a, b, c = (int(x) for x in input().split())
summa = []
summa.append(a + b)
summa.append(a + c)
summa.append(b + c)
print(max(summa))
