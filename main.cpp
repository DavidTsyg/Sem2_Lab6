#include <iostream>


using namespace std;

class Complex {
    double x;
    double y;
public:
    double give_x() {
        return x;
    }
    double give_y() {
        return y;
    }
    Complex()
    {
        x = 0;
        y = 0;
    }
    Complex(double first, double second)
    {
        x = first;
        y = second;
    }

    void sum(Complex number)
    {
        x += number.give_x();
        y += number.give_y();
    }

    void sub(Complex number)
    {
        x -= number.give_x();
        y -= number.give_y();
    }

    void mul(int number)
    {
        x *= number;
        y *= number;
    }

    void div(int number)
    {
        if (number) {
            x /= number;
            y /= number;
        }
        else cout << "You can't divide by zero !" << endl;
    }

    void mul_complex(Complex number)
    {
        double buf = x;
        x = x*number.give_x() - y*number.give_y();
        y = buf*number.give_y() + y*number.give_x();
    }
    void print()
    {
        cout << x << " + i*(" << y << ')' << endl;
    }
};
int main() {
    Complex num1 (10, 15);
    Complex num2 (5, 6);
    num1.print(); num2.print();
    num1.sum(num2); num1.print();
    num1.sub(num2); num1.sub(num2); num1.print();
    num1.mul(2); num1.print();
    num1.mul_complex(num2); num1.print();
    num1.div(3); num1.print();


    return 0;
}
