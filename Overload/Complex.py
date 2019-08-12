
class Complex:

    def __init__(self, real, complex):
        self.real = real
        self.complex = complex

    def __str__(self):
        if self.real == 0 and self.complex == 0:
            return "0"
        elif self.real == 0:
            return str(self.complex) + "j"
        elif self.complex == 0:
            return str(self.real)
        elif self.complex > 0:
            if self.complex == 1:
                return str(self.real) + "+j"
            else:
                return str(self.real) + "+" + str(self.complex) + "j"
        else:
            if self.complex == -1:
                return str(self.real) + "-j"
            else:
                return str(self.real) + str(self.complex) + "j"

    
    def __add__(self, other):
        if isinstance(other, Complex):
            return Complex(self.real + other.real, self.complex + other.complex)
        elif isinstance(other, int) or isinstance(other, float):
            return self + Complex(other, 0)
        else: # something is wrong
            raise TypeError

    def __sub__(self, other):
        if isinstance(other, Complex):
            return Complex(self.real - other.real, self.complex - other.complex)
        elif isinstance(other, int) or isinstance(other, float):
            return self - Complex(other, 0)
        else: # something is wrong
            raise TypeError

    def __neg__(self, other):
        return Complex(-self.real, -self.complex)


    def __mul__(self, other):
        if isinstance(other, Complex):
            real = self.real * other.real - self.complex * other.complex
            complex = self.real * other.complex + self.complex * other.real
            return Complex(real, complex)
        elif isinstance(other, int) or isinstance(other, float):
            return self * Complex(other, 0)
        else:
            raise TypeError

    def __truediv__(self, other):
        if isinstance(other, Complex):
            result = self * Complex(other.real, -other.complex)
            ratio = other.real * other.real + other.complex * other.complex
            result.real /= ratio
            result.complex/= ratio
            return result
        elif isinstance(other, int) or isinstance(other, float):
            return self / Complex(other, 0)
        else: 
            raise TypeError


    def __radd__(self, other):
        return self + other

    def __rsub__(self, other):
        return Complex(0, 0) + other - self

    def __rmul__(self, other):
        return self * other

    def __rtruediv__(self, other):
        return Complex(1, 0) * other / self


#  test program
def main():
     
    d = float (input ("Enter any value with decimal point: "))
    
    
    i= int (input ("Enter the real part of a: " ))
    
    j = int (input ("Enter the complex part of a: "))

    x = int(input ("Enter the real part of b: "))
    
    y = int (input("Enter the complex part of b: "))
    
    a = Complex (i, j)
    b = Complex (x, y)

    
    

    print("a = %s" % (a))
    print("b = %s" % (b))

    # operators

    # two complex
    print("a + b = %s" % (a + b))
    print("a - b = %s" % (a - b))
    print("a * b = %s" % (a * b))
    print("a / b = %s" % (a / b))

    # complex with double
    print("a + d = %s" % (a + d))
    print("a - d = %s" % (a - d))
    print("a * d = %s" % (a * d))
    print("a / d = %s" % (a / d))

    # double with complex
    print("d + b = %s" % (-d + b))
    print("d - b = %s" % (d - b))
    print("d * b = %s" % (d * b))
    print("d / b = %s" % (d / b))

main()
