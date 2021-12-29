N = int(input("Введите рвзмер массива "))
A = []
print("Введите элементы массива")
for _ in range(N):
    A.append(input())
ne_chet = []
chet = []
for ind, el in enumerate(A):
    if ind % 2 == 1:
        chet.append(el)
    else:
        ne_chet.append(el)
print(ne_chet, list(reversed(chet)))