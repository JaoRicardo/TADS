#converção de temperatura
print("Vamos converter a temperatura")
tipot=input("Qual metodo você quer ultilizar? 1. converte celsius para fahrenhiet ou" 
            " 2. converte fahrenheit para celsius: ")
if tipot=="1":
    c=float(input("Qual a temperatura em celsius? "))
    f =float(round(c*1.8+32, 2))
    print(f)
if tipot=="2":
    f=float(input("Qual a temperatura em fahrenhiet? "))
    c =float(round((f-32)*(5/9), 2))
    print(c)