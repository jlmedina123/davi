def palabras(s):
    lista = s.split(" ")
    print(lista)
    return len(lista)

def mas_larga(s):
    l = s.split(" ")
    mas_grande = 0
    for el in l:
        if len(el) > mas_grande:
            mas_grande = len(el)
            
    return mas_grande

def repite(s, palabra):
    con = 0
    lis = s.split(" ")
    for el in lis:
        if el == palabra:
            con+=1
    return con

    
st = "papa y Davi son los mas mas chulos"
print(st)
n = palabras(st)
print(st)
print(n)
n = mas_larga(st)
print(n)
n = repite(st, "mas")
print(n)

