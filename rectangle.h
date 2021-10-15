//
// Created by rhy on 14.10.2021.
//

#ifndef HW2__RECTANGLE_H_
#define HW2__RECTANGLE_H_

#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

// прямоугольник
class Rectangle: public Shape {
public:
    virtual ~Rectangle() {}
    // Ввод параметров прямоугольника из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров прямоугольника
    virtual void InRnd();
    // Вывод параметров прямоугольника в форматируемый поток
    virtual void Out(ofstream &ofst);
    // Вычисление периметра прямоугольника
    virtual double Area();
private:
    int x1, y1, x2, y2; // Координаты левого верхнего угла
};

#endif //HW2__RECTANGLE_H_
