from math import *

print(f"{'x':>4} {'sin(x)':>14} {'cos(x)':>12} {'tan(x)':>14}")
print("-" * 50)
for i in range(11):
    x = i * pi / 10
    y = sin(x)
    z = cos(x)
    b = tan(x)
    if i % 10 == 5:
        b = "Нет"
        print(f"{x:8.4f}  {y:10.4f} {z:12.4f} {b:>14}")
    elif i % 10 == 0:
        b = 0
        print(f"{x:8.4f}  {y:10.4f} {z:12.4f} {b:14.4f}")
    else:
        print(f"{x:8.4f}  {y:10.4f} {z:12.4f} {b:14.4f}")
    print("-" * 50)
