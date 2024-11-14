lista1 = []
lista2 = []
lista3 = []


for i in range(3):
    for _ in range(10):
        if i==0:
            lista1.append(int(input(f"Me fale 10 numeros para fazer a primeira lista: ")))
        elif i==1:
            lista2.append(int(input("Me fale mais 10 numeros para fazer a segunda lista: ")))
        elif i==2:
            lista3.append(lista1[_]*lista2[_])
print(lista1)
print(lista2)
print(lista3)    
