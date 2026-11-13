n = int(input("Введите ваше число N: "))
s = 0
sk = 0
fact = 1
for i in range(1, n + 1):
    s += i
    sk += i**2
    fact *= i
print(f"Сумма чисел: {s}")
print(f"Факториал: {fact}")
print(f"Сумма квадратов: {sk}")
