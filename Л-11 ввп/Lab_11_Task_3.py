print("Введите значения точек A, B, C")
A, B, C = [int(x) for x in input().split()]
if (C - A) > (B - A):
    print("B", B - A)
elif (C - A) != (B - A):
    print("C", C - A)

