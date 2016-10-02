#Problema do escalonamento de intervalos
#Ordena pelo final e conta quantos são menor e igual
pairs = []
cont = 1
n = int(input())
for i in range(n):
    s, f  = (int(i) for i in input().strip().split(" "))
    #Ordenar pelo final
    pairs.append((f,s))
    
pairs.sort()
time = pairs[0][0]

for i in range(1,n):
    if time <= pairs[i][1]:
        time = pairs[i][0]
        cont += 1

print(cont)
