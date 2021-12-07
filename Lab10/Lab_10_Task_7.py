print("Введите a, b, c")
a = int(input())
b = int(input())
c = int(input())
if (a < b + c) and (b < a + c) and (c < a + b):
    print("Существует тругольник со сторонами ", a, b, c)
else:
    print("Треугольника со сторонами ", a, b, c, " не существует")