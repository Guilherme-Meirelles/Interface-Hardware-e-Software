a = "abacate"
b = "abacaxi"

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{a}' e '{b}' : {levenshtein(a,b)}\n")

c = "armando"
d = "armario"

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{c}' e '{d}' : {levenshtein(c,d)}\n")

print(f"Resultado do algoritmo de levenshtein para os parâmetros 'ri' e 'risada' : {levenshtein("ri", "risada")}\n")

e = ""
f = "ola"

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{e}' e '{f}' : {levenshtein(e,f)}\n")

g = "sobradinho"
h = "sobrado"

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{g}' e '{h}': {levenshtein(g,h)}\n")

print(f"Resultado do algoritmo de levenshtein para os parâmetros 'roleta russa' e 'soldagem' : {levenshtein("Roleta Russa","Soldagem")}\n")

i = "salada"
j = "patada"

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{i}' e '{j}' : {levenshtein(i,j)}\n")

print(f"Resultado do algoritmo de levenshtein para os parâmetros 'cazaquistao' e 'japao' : {levenshtein("cazaquistao","japao")}\n")

print("Agora é a sua vez! \n")

k = input("Digite um primeiro texto para executar o algoritmo de levenshtein: ")
l = input("Digite um segundo texto para executar o algoritmo de levenshtein: ")

print(f"Resultado do algoritmo de levenshtein para os parâmetros '{k}' e '{l}' : {levenshtein(k,l)}\n")