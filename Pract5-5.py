n = int(input("Введите число: "))
k = len(str(n))
s = 0
r = 0
pr = 1
for i in range(k):
    b = n % 10
    s += b
    pr *= b
    r = r * 10 + b
    n //= 10
print(f"Количество цифр числа: {k} ")
print(f"Сумма цифр числа: {s}")
print(f"Произведение цифр числа: {pr}")
print(f"Перевернутое число: {r}")
