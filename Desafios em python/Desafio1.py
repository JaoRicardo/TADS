#Verificar se o numero é impar ou par
numero=int(input("Digite um numero: "))
if numero ==0:
    print("O numero 0 não é impar nem par")
elif numero%2==0:
    print(f'O numero {numero} é par')
else:
    print(f'O numero {numero} é impar')