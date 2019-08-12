public class Complex {

  private final double real;
  private final double complex;

  public Complex(double real, double complex) {
    this.real = real;
    this.complex = complex;
  }

  public double getReal() {
    return real;
  }

  public double getComplex() {
    return complex;
  }

  public Complex add(Complex other) {
    return new Complex(this.real + other.real, this.complex + other.complex);
  }

  public Complex subtract(Complex other) {
    return new Complex(this.real - other.real, this.complex - other.complex);
  }

  public Complex multiply(Complex other) {
    double real = this.real * other.real - this.complex * other.complex;
    double complex = this.real * other.complex + this.complex * other.real;
    return new Complex(real, complex);
  }

  public Complex divide(Complex other) {
    Complex result = this.multiply(new Complex(other.real, - other.complex));
    double val = other.real * other.real + other.complex * other.complex;
    return new Complex(result.real / val, result.complex / val);
  }

  public Complex add(double other) {
    return this.add(new Complex(other, 0));
  }

  public Complex subtract(double other) {
    return this.subtract(new Complex(other, 0));
  }

  public Complex multiply(double other) {
    return this.multiply(new Complex(other, 0));
  }

  public Complex divide(double other) {
    return this.divide(new Complex(other, 0));
  }

  @Override
  public String toString() {
    Complex num= this;
    if (num.real == 0 && num.complex == 0) {
      return "num";
    } else if (num.real == 0) {
      return "" + num.complex + "j";
    } else if (num.complex == 0) {
      return "" + num.real;
    } else if (num.complex > 0) {
      if (num.complex == 1) {
        return "" + num.real + "+j";
      } else {
        return "" + num.real + "+" +  num.complex + "j";
      }
    } else {
      if (num.complex == -1) {
        return "" + num.real + "-j";
      } else {
        return "" + num.real + num.complex + "j";
      }
    }
  }
}