#include <iostream>

using namespace std;

// струткура квадрата
struct Square {
private:
    int side;  // змінна для зберігання довжини сторони
public:
    // конструктор без параметрів
    Square() {
        side = 5;
    }

    // конструктор з параметрами
    Square(int side) {
        this->side = side;
    }

    // метод для виведення довжини сторони квадрата
    void PrintSquare() {
        cout << "Side: " << side << endl;
    }

    // метод для присвоєння нової довжини сторони квадрата
    void AssignSideSquare(int side) {
        this->side = side;
    }

    // метод для обчислення площі квадрата
    void SquareArea() {
        cout << "Area: " << side * side << endl;
    }

    // метод для обчислення периметра квадрата
    void SquarePerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }

};

// структура  ромба
struct Rhombus {
private:
    int side;   // сторона
    int height; // висота
public:
    // конструктор без параметрів
    Rhombus() {
        side = 5;
        height = 4;
    }

    // конструктор з параметрами
    Rhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // метод для виведення сторони та висоти ромба
    void PrintRhombus() {
        cout << "Side: " << side << ", Height: " << height << endl;
    }

    // метод для зміни сторони та висоти ромба
    void AssignSideHeightRhombus(int side, int height) {
        this->side = side;
        this->height = height;
    }

    // метод для обчислення площі ромба
    void RhombusArea() {
        cout << "Area: " << side * height << endl;
    }

    // метод для обчислення периметра ромба
    void RhombusPerimeter() {
        cout << "Perimeter: " << side * 4 << endl;
    }

};

// структура прямокутника
struct Rectangle {
private:
    int side1;  // перша сторона
    int side2;  // друга
public:
    // конструктор без параметрів
    Rectangle() {
        side1 = 5;
        side2 = 4;
    }

    // конструктор з параметрами
    Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // метод для виведення сторін прямокутника
    void PrintRectangle() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << endl;
    }

    // метод для зміни сторін прямокутника
    void AssignSide1Side2Rectangle(int side1, int side2) {
        this->side1 = side1;
        this->side2 = side2;
    }

    // метод для обчислення площі прямокутника
    void RectangleArea() {
        cout << "Area: " << side1 * side2 << endl;
    }

    // метод для обчислення периметра прямокутника
    void RectanglePerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }

};

// структура  трапеції
struct Trapezoid {
private:
    int side1;   // перша сторона
    int side2;   // друга сторона
    int height;  // висота
public:
    // конструктор без параметрів
    Trapezoid() {
        side1 = 5;
        side2 = 4;
        height = 3;
    }

    // конструктор з параметрами
    Trapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // метод для виведення сторін та висоти трапеції
    void PrintTrapezoid() {
        cout << "Side1: " << side1 << ", Side2: " << side2 << ", Height: " << height << endl;
    }

    // метод для зміни сторін і висоти трапеції
    void AssignSide1Side2HeightTrapezoid(int side1, int side2, int height) {
        this->side1 = side1;
        this->side2 = side2;
        this->height = height;
    }

    // метод для обчислення площі трапеції
    void TrapezoidArea() {
        cout << "Area: " << ((side1 + side2) / 2) * height << endl;
    }

    // метод для обчислення периметра трапеції
    void TrapezoidPerimeter() {
        cout << "Perimeter: " << side1 * 2 + side2 * 2 << endl;
    }

};

int main()
{
    cout << "Square: " << endl;
    Square obj;  // створення об'єкта квадрата за замовчуванням
    Square obj2 = Square(9);  // створення об'єкта квадрата з параметрами

    obj.PrintSquare();
    obj2.PrintSquare();
    obj.AssignSideSquare(7);  // зміна сторони квадрата
    obj.PrintSquare();
    obj.SquareArea();  // обчислення площі квадрата
    obj.SquarePerimeter();  // обчислення периметра квадрата

    cout << "Rhombus: " << endl;
    Rhombus obj3;  // створення об'єкта ромба за замовчуванням
    Rhombus obj4 = Rhombus(9, 5);  // створення об'єкта ромба з параметрами

    obj3.PrintRhombus();
    obj4.PrintRhombus();
    obj3.AssignSideHeightRhombus(7, 3);  // зміна сторони та висоти ромба
    obj3.PrintRhombus();
    obj3.RhombusArea();  // обчислення площі ромба
    obj3.RhombusPerimeter();  // обчислення периметра ромба

    cout << "Rectangle: " << endl;
    Rectangle obj5;  // створення об'єкта прямокутника за замовчуванням
    Rectangle obj6 = Rectangle(6, 7);  // створення об'єкта прямокутника з параметрами

    obj5.PrintRectangle();
    obj6.PrintRectangle();
    obj5.AssignSide1Side2Rectangle(4, 9);  // зміна сторін прямокутника
    obj5.PrintRectangle();
    obj5.RectangleArea();  // обчислення площі прямокутника
    obj5.RectanglePerimeter();  // обчислення периметра прямокутника

    cout << "Trapezoid: " << endl;
    Trapezoid obj7;  // створення об'єкта трапеції за замовчуванням
    Trapezoid obj8 = Trapezoid(8, 10, 5);  // створення об'єкта трапеції з параметрами

    obj7.PrintTrapezoid();
    obj8.PrintTrapezoid();
    obj7.AssignSide1Side2HeightTrapezoid(4, 9, 6);  // зміна сторін і висоти трапеції
    obj7.PrintTrapezoid();
    obj7.TrapezoidArea();  // обчислення площі трапеції
    obj7.TrapezoidPerimeter();  // обчислення периметра трапеції
}
