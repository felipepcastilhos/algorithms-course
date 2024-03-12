#Vetores em Python

#LENDO INPUTS
qtyNumbers = int(input("Quantos numeros voce vai digitar? "))

#DECLARANDO VETOR
vet: [float] = [0 for x in range(qtyNumbers)]

#LENDO VETOR
for i in range(0, qtyNumbers):
    vet[i] = float(input("Digite um número: "))
 
#PRINTING OUTPUTS    
print()
print("NUMEROS DIGITADOS: ")
for i in range(0, qtyNumbers):
    print("%.2f" %vet[i])