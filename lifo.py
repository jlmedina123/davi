size = 5

#
# LIFO (stack)
#
def pushlifo(l, el):
    if (len(l) == size):
        print("Stack overflow")
    else:
        l.append(el)

def poplifo(l):
    if (len(l) == 0):
        print("Stack underflow")
        return 0
    return l.pop()

def imprimir(l):
    print("Mi lista es: ", end='')
    print(l)
    # for i in range(len(l)):
    #   print(l[i])

lista = []
imprimir(lista)
poplifo(lista)
pushlifo(lista, 3)
imprimir(lista)
pushlifo(lista, 4)
pushlifo(lista, 5)
pushlifo(lista, 8)
pushlifo(lista, 9)
imprimir(lista)
pushlifo(lista, 10)
imprimir(lista)
