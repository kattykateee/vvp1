N = int(input("Введите размер массива: "))
print("Введите эелементы массива: ")
A = []
for i in range(N):
    A.append(int(input()))
counter = [[x, A.count(x)] for x in set(A)]
print(counter)
for el in counter:
    if el[1] == 2:
        print(el[0])
        first_ind = A.index(el[0])
        print(first_ind, A.index(el[0], first_ind+1, N))
