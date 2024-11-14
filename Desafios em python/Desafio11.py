lista =[]
for _ in range(10):
    lista.append(int(input("Me fale um numero para prencher a lista: ")))

print(f"A sua lista ficou assim \n {lista}")

x = int(input("Me fale um numero para multiplicar a primeira metade de sua lista: "))
y = int(input("Me fale outro numero para multiplicar a outra metade: "))

for _ in range(10):
    if _<5:
        lista[_] = lista[_]*x
    elif _>=5:
        lista[_] = lista[_]*y
print(lista)