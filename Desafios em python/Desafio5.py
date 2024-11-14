#Contar a quantidade de vogair em uma palavra
vogais=["a", "e", "i", "o", "u"]
palavra=input("Escreva um palavra que eu contarei quantas vogais tem nela: ")
cont_vogais =0
for vogal in vogais:
    cont_vogais+=palavra.count(vogal)
print("A palavra",palavra,"tem ", "uma vogal" if cont_vogais==1 else cont_vogais,"vogais")