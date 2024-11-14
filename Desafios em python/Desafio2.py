#Calculadora
equacao=input("Qual operação deseja fazer? (Soma, subtração, multiplicação ou divisão): ").lower()
num1=float(input("Qual o Primeiro numero? "))
num2=float(input("Qual o segundo numero? "))

if equacao=="soma":
    resultado = num1+num2
elif equacao=="subtração"or equacao=="subtracao":
    resultado=num1-num2
elif equacao=="multiplicação" or equacao=="multiplicacao":
    resultado=num1*num2
elif equacao=="divisão" or equacao=="divisao":
    resultado=num1/num2
print(resultado)