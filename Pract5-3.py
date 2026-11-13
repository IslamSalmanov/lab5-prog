n = int(input("Введите число N: "))
a, b = 0, 1
s = " "
print(f"Первые {n} чисел Фибоначчи")
for i in range(n):
    s += str(a) + " "
    a, b = b, a + b
print(s)
