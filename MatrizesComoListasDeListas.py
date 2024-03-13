#Matrizes em Python

#LENDO INPUTS
qtyLines = int(input("Quantas linhas vai ter a matriz? "))
qtyColumns = int(input("Quantas colunas vai ter a matriz? "))

#DECLARAÇÃO MATRIZ
matriz1: [[int]] = [[0 for x in range(qtyColumns)] for x in range(qtyLines)]

#LENDO MATRIZ
for i in range(0, qtyLines):
    for j in range(0, qtyColumns):
        matriz1[i][j] = int(input(f"Elemento [{i},{j}]: "))

#PRINTING OUTPUTS    
print()
print("NUMEROS DIGITADOS: ")
for i in range(0, qtyLines):
    for j in range(0, qtyColumns):
        print(f"{matriz1[i][j]} ", end="")
    print()