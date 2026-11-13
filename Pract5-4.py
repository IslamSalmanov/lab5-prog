n = int(input("Введите ваше число N: "))
f = n
m = []
d = 2
while d * d <= n:
    while n % d == 0:
        m.append(str(d))
        n //= d
    d += 1
if n > 1:
    m.append(str(n))
print(f, "=", " × ".join(m))
