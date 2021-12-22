print("Введите целое число N (> 0)")
N = int(input())
f = 1
for x in range(1, N+1):
    f = f*(1+x*0.1)
print(f)
