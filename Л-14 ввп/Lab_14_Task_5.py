print("Введите A и B")
A, B = [int(x) for x in input().split()]
while (A > B) or (B > A):
    if A > B:
        A = A - B
    else:
        B = B - A
print("НОД =", A)
