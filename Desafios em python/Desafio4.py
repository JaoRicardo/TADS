#Verificar se a palavra é um palindromo
while True:
    print("Vamos verificar se a palavra fica igual de trás para frente")
    j=input("Qual a palavra que deseja verificar? ")
    j2=j[::-1]
    if j == j2:
        print(f'A palavra {j} é igual de trás para frente')
    else:
        print("Não é igual")