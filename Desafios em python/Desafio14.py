par = []
impar = []

print("Me fale 30 numeros inteiros")

for _ in range(30):
    numero = int(input("Me fale um numero: "))
    if numero%2==0:
        par.append(numero)
    elif numero%2==1:
        impar.append(numero)
    if len(par)==5:
        print("O numero maximo de posições foram colocados no vetor par. Vou limpar o vetor.")
        print(par)
        par.clear()
    elif len(impar)==5:
        print("O numero maximo de posições foram colocados no vetor impar. Vou limpar o vetor.")
        print(impar)
        impar.clear()
print("Fim do codigo")
print(f"No final a lista de numeros pares ficou assim:\n {par}")
print(f"No final a lista de numeros impares ficou assim:\n {impar}")

