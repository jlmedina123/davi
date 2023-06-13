def maxnum(lista):
    m = 0
    for el in lista:
        if el > m:
            m = el
    return m
    
def maxnum2(lista):
    # lista.sort()
    ordenada = sorted(lista)
    return ordenada[-1]

def elementtimes(lista, numero):
    times = 0
    for el in lista:
        if el == numero:
            times+=1
    return times    

milista = [10, 4, 6, 9, 8, 1]

print(milista)
m = maxnum2(milista)
print(milista)
print(m)
m = elementtimes(milista, 3)
print(m)
