alturas = []
altura = float(1)
i =-1
amem = 0
while (input("Digite n para parar o codigo: ")) != "0":
    alturas.append(float(input("Fale ")))
    
for _ in range(len(alturas)):
    for j in range(len(alturas)):
        if alturas[j]>alturas[_]:
            amem = float(alturas[j])
            alturas[j] = float(alturas[_])
            alturas[_] = float(amem)
                

print(alturas[0])
print(alturas[-1])

altura = sum(alturas)/(len(alturas))
print(altura)
