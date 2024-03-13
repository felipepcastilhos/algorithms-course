#Problema Soma Vetor

#LEITURA INPUT
qtyNumbers = int(input("Quantos numeros voce vai digitar? "))

#INICIALIZANDO VETOR
#vector: [float] = [0 for x in range(qtyNumbers)]
vector = [0 for x in range(qtyNumbers)]
 
#LEITURA VETOR
for i in range(0, qtyNumbers):
    vector[i] = float(input("Digite um numero: "))

#MANIPULAÇÃO DADOS    
soma = 0
for i in range(0, qtyNumbers):
    soma+=vector[i]
avarege = soma/qtyNumbers

#PRINTING OUTPUTS
print("\nVALORES = ", end="")
for i in range(0, qtyNumbers):
    print("", end=f"{vector[i]:.1f} ")
print(f"\nSOMA = {soma:.2f}")    
print(f"MEDIA = {avarege:.2f}") 
