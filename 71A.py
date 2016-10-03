n = int(input())

for i in range(n):
    palavra = str(input())
    tam = len(palavra)
    if tam <= 10:
        print(palavra)
    else:
        print(palavra[0]+str(tam-2)+palavra[tam-1])
