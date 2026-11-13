from random import *
print("Игра 'Быки и коровы'")
a=str(randint(0,9))
for i in range(3):
    g=randint(0,9)
    if str(g) not in a:
        a+=str(g)
s=0
while s==0:
    n=int(input("Введите число: "))
    n=str(n)
    b=0
    c=0
    for i in range(4):
        if a[i] in n:
            if a[i]==n[i]:
                b+=1
            else:
                c+=1
    print(f'Быков: {b}')
    print(f'Коров: {c}')
    if n==a:
        s=100
        print("Вы угадали число!")

while(s=0){
        int n;
        cout << "Введите число: ";
        cin >> n;
        for(int i=1; i<=4; i++){
            if(a[i] in n){

            }
        }
    }