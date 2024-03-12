#Problema Retangulo
#ADICIONANDO BIBLIOTECA OPERAÇÕES MATEMÁTICAS
import math

#LEITURA DOS INPUTS
base = float(input("Base do retangulo: "))
altura = float(input("Altura do retangulo: "))

#MANIPULAÇÃO DOS DADOS
area = base * altura
perimetro = 2 * (base+altura)
diagonal = math.sqrt(math.pow(base,2)+math.pow(altura,2))

#PRINTING OUTPUTS
print(f"AREA = {area:.4f}")
print(f"PERIMTRO = {perimetro:.4f}")
print(f"DIAGONAL = {diagonal:.4f}") 