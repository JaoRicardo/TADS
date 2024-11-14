import random
letrasM="QWERTYUIOPASDFGHJKLZXCVBNM"
letrasm="qwertyuiopasdfghjklzxcvbnm"
simbolos="?/*@#$%&!|=+-_,."
ultiliza=0
print("Tem 3 possibilidades de combinações maiusculas, minusculas e simbolos")
print("Você pode escolher só 1, 2 ou todas")
comb=int(input("Quatas combinações você vai escolher?(1, 2 ou 3)"))
quantC=int(input("Quanstos caracteres você quer ter na senha? "))
def pomt():
    print("Letras maiusculas = 1\n Letras minusculas = 2\n Simbolos = 3")
if comb==1:
    pomt()
    combp=int(input("Qual o unico que você vai escolher? "))
    if combp ==1:
        ultiliza=letrasM
    elif combp==2:
        ultiliza=letrasm
    else:
        ultiliza=simbolos
elif comb==2:
    pomt()
    combp=int(input("Qual a primeira combinação que você vai escolher? "))
    combp2=int(input("Qual a segunda combinação que você vai escolher? "))
    if combp==1 and combp==2:
        ultiliza = letrasM + letrasm
    elif combp==1 and combp==3:
        ultiliza= letrasM + simbolos
    else:
        ultiliza=letrasm + simbolos
elif comb==3:
    print("Você escolheu usar todos")
    ultiliza = letrasM + letrasm + simbolos

senha="".join(random.sample(ultiliza, quantC))
print(f'Sua senha é {senha}')