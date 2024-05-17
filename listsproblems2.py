

def maximo(l):
    return max(l)

def maximo2(l):
    wm = l[0]
    for ele in l:
        if ele > wm:
            wm = ele
    return wm

def maximo3(l):
    wm = l[0]
    for i in range(len(l)):
        if l[i] > wm:
            wm = l[i]
    return wm        

def maximo4(l):
    wm = l[0]
    i = 0
    while i < len(l):
        if l[i] > wm:
            wm = l[i]
    return wm
    

lista = [3, 5, 1, 2, 10, 8]
maxi = maximo(lista)
print(maxi)
