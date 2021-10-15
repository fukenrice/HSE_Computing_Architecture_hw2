
#ifndef HW2__TRIANGLE_H_
#define HW2__TRIANGLE_H_

//------------------------------------------------------------------------------
// triangle.h - содержит описание треугольника
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

#include "rnd.h"
#include "shape.h"

//------------------------------------------------------------------------------
// треугольник
class Triangle: public Shape {
public:
    virtual ~Triangle() {}
    // Ввод параметров треугольника из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров треугольника
    virtual void InRnd();
    // Вывод параметров треугольника в форматируемый поток
    virtual void Out(ofstream &ofst);
    // Вычисление периметра треугольника
    virtual double Area();
private:
    int x1, x2, x3, y1, y2, y3; // координаты вершин
};


#endif //HW2__TRIANGLE_H_
