from math import *
n=int(input("Введите число N: "))
a=int(input("Число знаков после запятой: "))
e=0
for i in range(1, n+1):
    fact=1
    for x in range(1,i):
        fact*=x
    e+=1/fact
print(f"Число e = {e:.{a}f}")