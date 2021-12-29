N = int(input("Введите размер массива: "))
D = int(input("Введите знаменатель геометрической прогрессии: "))
A = int(input("Введите первый эелемент геометрической прогрессии: "))
array = [A]
b = 0
i = 0
while len(array) < N:
    b = array[i]*D
    array.append(b)
    i += 1
if len(array) == N:
    print(array)