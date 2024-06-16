#include <iostream>

class Point {
private:
    int x;
    int y;
    int z;
public:
    Point(int X, int Y, int Z) {
        x = X;
        y = Y;
        z = Z;
    }
    void NewX(int new_x) {
        x = new_x;
    }
    void NewY(int new_y) {
        y = new_y;
    }
    void NewZ(int new_z) {
        z = new_z;
    }

    void Print() {
        std::cout << "X: " << x << " Y: " << y << " Z: " << z << std::endl;
    }
};

int main()
{
    Point point1(1,2,3);
    point1.Print();

    point1.NewX(3);
    point1.NewY(2);
    point1.NewZ(1);

    point1.Print();
}


