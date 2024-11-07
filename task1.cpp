#include <iostream>
#include <cmath>
using namespace std;

class Vector{
    private:
        double x, y;

    public:
        Vector(double val_x, double val_y) {
            x = val_x;
            y = val_y;

        }

        Vector add(Vector& other_Vector) {
            double add_x = x + other_Vector.x;
            double add_y = y + other_Vector.y;

            return Vector(add_x, add_y);
        }


        void print() {
            cout << "x = " << x << " , " << "y = " << y << "\n";
        }

        void dir() {
            double norm = sqrt(x * x + y * y);
            cout << "norm = " << norm << "\n";
        }

};

int main() {

    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    cout << "v1 : ";
    v1.print();
    cout << "v2 : ";
    v2.print();

    Vector v3 = v1.add(v2);
    cout << "v3 : ";
    v3.print();

    v3.dir();

    return 0;
}