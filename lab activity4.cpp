#include <iostream>

using namespace std;

struct Complex
{
    float real;
    float imag;
};

Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex subtract(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex multiply(Complex a, Complex b)
{
    Complex result;
    result.real = (a.real * b.real) - (a.imag * b.imag);
    result.imag = (a.real * b.imag) + (a.imag * b.real);
    return result;
}

int main()
{
    Complex a, b, c;

    cout << "Enter the first complex number: ";
    cin >> a.real >> a.imag;

    cout << "Enter the second complex number: ";
    cin >> b.real >> b.imag;

    c = add(a, b);
    cout << "Addition is: " << c.real << " + " << c.imag << "i" << endl;

    c = subtract(a, b);
    cout << "Subtraction is: " << c.real << " + " << c.imag << "i" << endl;

    c = multiply(a, b);
    cout << "Multiplication is: " << c.real << " + " << c.imag << "i" << endl;

    return 0;
}
