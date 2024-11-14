lista = []
lista2 = []
x = 0
imp = 0
par = 0

for _ in range(10):
    lista.append(int(input("Me fale alguns numeros até prencher a lista: ")))

for _ in range(10):
    lista2.insert(0, lista[_])

print(lista2)

for _ in range(10):
    x = x+lista[_]
print(f"A soma aritimetica dos valores é de {x/len(lista)}")

for _ in range(10):
    if lista[_]==0:
        print("Zero não é par nem impar")
    elif lista[_]%2==0:
        par+=1
    elif lista[_]%2!=0:
        imp+=1
    
print(f"E nessa lista tem {imp} {"numero" if imp==1 else "numeros"} { "impar" if imp==1 else "impares"} e "
      f"{par} {"numero" if par==1 else "numeros"} {"par" if par==1 else "pares"}")