def vez(one):
    print(f"Você colocou o numero o numero nesse intervalo",one, "vez" if one==1 else "vezes"
          "=================================================================")
    return one
        
somaari = int(0)

first = 1

second = 1

thert= 1

number = 0

while number<=151:
    number = int(input("Me fale Algum numero inteiro: "))

    if 0<=number<=50:
        print(f"================================================================= \n"
              f"Você digitou um numero no primeiro intervalo (De 0 a 50) {number}\n"
              "=================================================================\n")
        vez(first)
        first+=1
    elif 51<=number<=100:
        print("=================================================================\n"
            f"Você digitou um numero no primeiro intervalo (De 51 a 100) {number}\n"
            "=================================================================\n")
        vez(second)
        second+=1
    elif 101<=number>=150:
        print("=================================================================\n"
            f"Você digitou um numero no primeiro intervalo (De 101 a 150) {number}\n"
            "=================================================================\n")
        vez(thert)
        thert+=1
    if somaari>0:
        print("A soma do numero que você digitou agora com o numero anterios é de\n", somaari+number,
              "=================================================================\n")
    somaari+=number

print(f"Somando todos os numeros que você digitou o resultado é {somaari}\n"
      f"Vou te mostrar quantas vezes você digitou em cada intervalo:\n"
      f"Primeiro {first}. Segundo {second}. Terceiro {thert}.")