try:
    n = int(input("Введите число: "))
    s = 1
    i = 2
    while i * i <= n:
        if n % i == 0:
            s += i
            if i != n // i:
                s += n // i
        i += 1
    if s == n and n > 1:
        print("Число совершенное")
    else:
        print("Число несовершенное")
except ValueError:
    print("Это не число")
