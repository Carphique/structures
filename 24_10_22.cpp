#include <iostream>

using namespace std;

// ��������� ��������
struct Square {
private:
    int side;  // ����� ��� ��������� ������� �������
public:
    // ����������� ��� ���������
    Square() {
        side = 5;
    }

    // ����������� � �����������
    Square(int side) {
        this->side = side;
    }

    // ����� ��� ��������� ������� ������� ��������
    void PrintSquare() {
        cout << "Side: " << side << endl;
    }

    // ����� ��� ��������� ���� ������� ������� ��������
    void AssignSideSquare(int side) {
        this->side = side;
    }

    // ����� ��� ���������� ����� ��������
    void SquareArea() {
        cout << "Area: " << side * side << endl;
    }

    // ����� ��� ���������� ��������� ��������
    void SquarePerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }

};

// ���������  �����
struct Rhombus {
private:
    int side;   // �������
    int height; // ������
public:
    // ����������� ��� ���������
    Rhombus() {
        side = 5;
        height = 4;
    }

    // ����������� � �����������
    Rhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // ����� ��� ��������� ������� �� ������ �����
    void PrintRhombus() {
        cout << "Side: " << side << ", Height: " << height << endl;
    }

    // ����� ��� ���� ������� �� ������ �����
    void AssignSideHeightRhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // ����� ��� ���������� ����� �����
    void RhombusArea() {
        cout << "Area: " << side * height << endl;
    }

    // ����� ��� ���������� ��������� �����
    void RhombusPerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }

};

// ��������� ������������
struct Rectangle {
private:
    int side1;  // ����� �������
    int side2;  // �����
public:
    // ����������� ��� ���������
    Rectangle() {
        side1 = 5;
        side2 = 4;
    }

    // ����������� � �����������
    Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // ����� ��� ��������� ����� ������������
    void PrintRectangle() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << endl;
    }

    // ����� ��� ���� ����� ������������
    void AssignSide1Side2Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // ����� ��� ���������� ����� ������������
    void RectangleArea() {
        cout << "Area: " << side1 * side2 << endl;
    }

    // ����� ��� ���������� ��������� ������������
    void RectanglePerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }

};

// ���������  ��������
struct Trapezoid {
private:
    int side1;   // ����� �������
    int side2;   // ����� �������
    int height;  // ������
public:
    // ����������� ��� ���������
    Trapezoid() {
        side1 = 5;
        side2 = 4;
        height = 3;
    }

    // ����������� � �����������
    Trapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // ����� ��� ��������� ����� �� ������ ��������
    void PrintTrapezoid() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << ", Height: " << height << endl;
    }

    // ����� ��� ���� ����� � ������ ��������
    void AssignSide1Side2HeightTrapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // ����� ��� ���������� ����� ��������
    void TrapezoidArea() {
        cout << "Area: " << ((side1 + side2) / 2) * height << endl;
    }

    // ����� ��� ���������� ��������� ��������
    void TrapezoidPerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }

};

int main()
{
    cout << "Square: " << endl;
    Square obj;  // ��������� ��'���� �������� �� �������������
    Square obj2 = Square(9);  // ��������� ��'���� �������� � �����������

    obj.PrintSquare();
    obj2.PrintSquare();
    obj.AssignSideSquare(7);  // ���� ������� ��������
    obj.PrintSquare();
    obj.SquareArea();  // ���������� ����� ��������
    obj.SquarePerimeter();  // ���������� ��������� ��������

    cout << "Rhombus: " << endl;
    Rhombus obj3;  // ��������� ��'���� ����� �� �������������
    Rhombus obj4 = Rhombus(9, 5);  // ��������� ��'���� ����� � �����������

    obj3.PrintRhombus();
    obj4.PrintRhombus();
    obj3.AssignSideHeightRhombus(7, 3);  // ���� ������� �� ������ �����
    obj3.PrintRhombus();
    obj3.RhombusArea();  // ���������� ����� �����
    obj3.RhombusPerimeter();  // ���������� ��������� �����

    cout << "Rectangle: " << endl;
    Rectangle obj5;  // ��������� ��'���� ������������ �� �������������
    Rectangle obj6 = Rectangle(6, 7);  // ��������� ��'���� ������������ � �����������

    obj5.PrintRectangle();
    obj6.PrintRectangle();
    obj5.AssignSide1Side2Rectangle(4, 9);  // ���� ����� ������������
    obj5.PrintRectangle();
    obj5.RectangleArea();  // ���������� ����� ������������
    obj5.RectanglePerimeter();  // ���������� ��������� ������������

    cout << "Trapezoid: " << endl;
    Trapezoid obj7;  // ��������� ��'���� �������� �� �������������
    Trapezoid obj8 = Trapezoid(8, 10, 5);  // ��������� ��'���� �������� � �����������

    obj7.PrintTrapezoid();
    obj8.PrintTrapezoid();
    obj7.AssignSide1Side2HeightTrapezoid(4, 9, 6);  // ���� ����� � ������ ��������
    obj7.PrintTrapezoid();
    obj7.TrapezoidArea();  // ���������� ����� ��������
    obj7.TrapezoidPerimeter();  // ���������� ��������� ��������
}
