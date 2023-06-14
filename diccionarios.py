
def edadesdict(dic):
    for value in dic.values():
        print(value)

def todosdict(dic):
    k = dic.keys()
    for el in k:
        print(el)

def edaddict(dic, key):
    if key not in dic.keys():
        print("error: no key %s in dictionary" % key)
    else:
        e = dic[key]
        return e

def edaddict2(dic, key):
    if key not in dic.keys():
        dic[key] = 0
    return dic[key]

    
c = {"davi": 8, "papa": 35, "mama": 32}
edad = edaddict(c, "davi")
print("davi")
print(edad)

todosdict(c)
edadesdict(c)

edad = edaddict(c, "antonio")
edad = edaddict2(c, "antonio")
print(edad)
