print("Введите A и B")
spisok = [int(x) for x in input().split()]
A = spisok[0]
B = spisok[1]
if A != B:
    A = max(A, B)
    B = max(A, B)
else:
    A = 0
    B = 0
print(A, B)

