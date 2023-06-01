def maxnum(l):
    maximum = -800
    for num in l:
        if num > maximum:
            maximum = num
    return maximum

def sumatodo(lista):
    suma = 0
    for el in lista:
        suma += el
    return suma


milista = [1, 4, 2, 30, 9]

for el in milista:
    print(el)
    
for i in range(len(milista)):
    print(milista[i])

i=0
while i < len(milista):
    print(milista[i])
    i+=1
    

maximo = maxnum(milista)
print("maximo = %d" % maximo)

suma = sumatodo(milista)
print(suma)

