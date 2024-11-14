divisores = []
number = int(input("Me fale um numero e direi para você quantos divisors ele tem: "))

for _ in range((1, number+1)):
    if (number%(_+1))==0:
        divisores.append(_+1)
    else:
        None
if len(divisores)==1:
    print("O numero 1 não é primo, porque Deus quis.")
elif len(divisores)==2:
    print("Parabéns, esse numeor é primo, ele é divisivel por 1 e ele mesmo")
elif len(divisores)>2:
    print(divisores)

    