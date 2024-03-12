#Problema Diagonal Negativos

#LEITURA INPUTS
matrizOrder = int(input("Qual a ordem da matriz? "))

#INICIALIZANDO MATRIZ
#matriz: [[int]] = [[0 for x in range(matrizOrder)] for x in range(matrizOrder)]
matriz = [[0 for x in range(matrizOrder)] for x in range(matrizOrder)]

#LEITURA MATRIZ
for i in range(0, matrizOrder):
    for j in range(0, matrizOrder):
        matriz[i][j] = int(input(f"Elemento [{i},{j}]: "))

#MANIPULAÇÃO DADOS
qtyNegatives = 0
for i in range(0, matrizOrder):
    for j in range(0, matrizOrder):
        if (matriz[i][j] < 0):
            qtyNegatives+=1
 
#PRINTING OUTPUTS
print("DIAGONAL PRINCIPAL:")
for i in range(0, matrizOrder):
    print(f"{matriz[i][i]} ", end="")
    
print()
print(f"QUANTIDADE DE NEGATIVOS = {qtyNegatives}")
    