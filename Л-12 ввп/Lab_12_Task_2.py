print("Введите исходное направление робота (C, Ю, З, В)")
direction = input()
print("Введите комнаду (-1, 0, 1")
command = int(input())
if command == 0:
    print(direction)
if command == -1 and direction == "С":
    print("B")
elif command == 1 and direction == "С":
    print("З")
if command == -1 and direction == "Ю":
    print("З")
elif command == 1 and direction == "Ю":
    print("В")
if command == -1 and direction == "В":
    print("Ю")
elif command == 1 and direction == "В":
    print("С")
if command == -1 and direction == "З":
    print("С")
elif command == 1 and direction == "З":
    print("Ю")