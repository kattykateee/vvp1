print("Введите год")
year = int(input())
buf_animal = {0: "обезьяны", 1: "петуха", 2: "сабаки", 3: "свиньи", 4: "крысы", 5: "быка", 6: "тигра", 7: "кролика", 8: "дракона",
              9: "змеи", 10: "лошади", 11: "овцы"}
buf_color = {0: "бел", 1: "бел", 2: "чёрн", 3: "чёрн", 4: "син", 5: "син", 6: "красн", 7: "красн", 8: "жёлт", 9: "жёлт"}
rem = 0
if year%12 == 0 or year%12 == 2 or year%12 == 3 or year%12 == 4 or year%12 == 9 or year%12 == 10 or year%12 == 11:
    if year%10 == 0 and year%10 == 1 or year%10 == 2 or year%10 == 3 or year%10 == 6 or year%10 == 7 or year%10 == 8 or year%10 == 9:
        rem = "ой"
    else:
        rem = "ей"
if year%12 == 1 or year%12 == 5 or year%12 == 6 or year%12 == 7 or year%12 == 8:
    if year%10 == 0 and year%10 == 1 or year%10 == 2 or year%10 == 3 or year%10 == 6 or year%10 == 7 or year%10 == 8 or year%10 == 9:
        rem = "ого"
    else:
        rem = "его"
print("год", f"{buf_color[year%10]}{rem}", buf_animal[year%12])