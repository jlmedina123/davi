

class Calculadora:
    def __init__(self, m, t):
        self.modelo = m
        self.tamano = t
    def suma(self, a, b):
        return a + b
    def resta(self, a, b):
        return a - b
    
class Coche:
    def __init__(self):
        self.x = 0 
        self.y = 0 
    def mueveiz(self):
        self.x -= 1
    def muevede(self):
        self.x += 1
    def muevearr(self):
        self.y += 1 
    def mueveab(self):
        self.y -= 1 
    def donde(self):
        print(f"x:{self.x} y:{self.y}")

calc1 = Calculadora("sony", 20)

a = calc1.suma(3, 5)
print(a)
a = calc1.resta(6, 1)
print(a)
calc1.modelo = "sony"
print(calc1.tamano)

mitesla = Coche()
mitesla.donde()
mitesla.mueveiz()
mitesla.donde()

teslazul = Coche()
teslazul.muevede()
teslazul.donde()

print(type(teslazul))
