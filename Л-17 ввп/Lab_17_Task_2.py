N = int(input(("Введите размер массива: ")))
print("Введите элементы массива")
result = []
for _ in range(N):
    result.append(int(input()))
result.sort()
flag = True
for i in range(len(result)-2):
    if result[i+1] - result[i] != result[i+2] - result[i+1]:
        flag = False
        break
if flag:
    print(result[1] - result[0])
else:
    print(0)
