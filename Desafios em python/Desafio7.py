#Lista de tarefas. Adicionar, remover e visualizrar
tarefas = []
qTarefas = 0
tTarefas = 1
alternativa = 1

def fazer():
    print("1.Adicionar tarefa a lista")
    print("2.remover tarefa da lista")
    print("3.Visualizar todas as tarefas da lista")
    
print("Olá, vamos começar a fazer sua lsta de tarefas ")

print("Vamos adicionar a sua primeira tarefa a lista")
tarefas.append(input("Me fale sua primeira tarefa: "))
print(f"Parabens seu primeiro intem da lista ficou assim\n"
      f"{tTarefas}. {tarefas[0]}")
print("==========================")
print("Sua primeira tarefa foi adicionada. O que você deseja fazer agora?")
fazer()
alternativa = int(input("Qual dessas você vai escolher?"))
while True:
    if alternativa == 0:
        print("O programa terminou")
        break
    elif alternativa == 1:
        qTarefas = int(input("Quantas tarefas você desenha adicionar?"))
        tTarefas = qTarefas+tTarefas
        for _ in range(qTarefas):
            tarefas.append(input("Qual a tarefa a ser adicionada? "))
            qTarefas = 0
        fazer()
    elif alternativa == 2:
        print("Você escolheu por remover algum item da lista"
              "Atuamente você tem",(tTarefas), "item" if tTarefas==1 else "Itens")
        for _ in range(tTarefas):
            print(f"{_ + 1}. {tarefas[_]}")
        removeT = int(input("Qual item você deseja remover? "))-1
        tarefas.pop(removeT)
        tTarefas -= 1
    elif alternativa == 3:
        print("Você escolheu por mostrar todos os itens da lista"
              "Atuamente você tem",(tTarefas), "item" if tTarefas==1 else "Itens")
        for _ in range(tTarefas):
            print(f"{_ + 1}. {tarefas[_]}")
    print("==========================")
    fazer()
    alternativa = int(input("Qual dessas você vai escolher?"))

        
