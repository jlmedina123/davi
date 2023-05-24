import random
import time

tablas = { }
errores = 0
principio = time.time()

for i in range(2, 10):
    tablas[i] = []
    for j in range(2, 10):
       tablas[i].append(j)

while len(tablas.keys()) > 0:
    i = random.randrange(0, len(tablas.keys()))
    tabla = tablas.keys()[i]
    j = random.randrange(0, len(tablas[tabla]))
    digito = tablas[tabla][j]

    res = ""
    while not res:
        print "%d * %d = " % (tabla, digito),
        res = input()
    if (res == tabla * digito):
        print "Muy bien, Davi!"
        tablas[tabla].remove(digito)
        if len(tablas[tabla]) == 0:
            del tablas[tabla]
    else:
        print "En verdad es : %d" % (tabla * digito)
        errores += 1

fin = time.time()
print "Enhorabuena Davi! Has terminado todas las tablas!!"
print "Y en solo %d segundos con %d errores! Wow!" % ((fin-principio), errores)

