f = input()
frase = f.lower()
vogais = "aeiouy"
frasefinal = ''
for i in range(6):
    frase = frase.replace(vogais[i],"")
tam = len(frase)
for i in range(tam):
    frasefinal += "."+frase[i]
print(frasefinal)
