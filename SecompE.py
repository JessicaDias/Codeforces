cont = 0
n = int(input())
for i in range(n):
    titulo = str(input())
    if len(titulo) % 2 == 0:
        cont += 1
print(cont)
