lista = []
vetor = []
tm_matriz = 6
for i in range(tm_matriz):
    valores = []
    for j in range (tm_matriz):
         valores.append(int(input("Digite 36 valores para adicionar em minha matriz 6x6: ")))
    lista.append(valores)

for i in lista:
     print(i)

A = int(input("Me fale um valor para mim multiplicar toda a matriz "))

for i in lista:
     for j in i:
          vetor.append(j * A)

print(vetor)