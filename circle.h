//
// Created by rhy on 14.10.2021.
//

#ifndef HW2__CIRCLE_H_
#define HW2__CIRCLE_H_

#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

class Circle: public Shape{
public:
    virtual ~Circle() {}
    // Ввод параметров прямоугольника из файла
    virtual void In(ifstream &ifst);
    // Случайный ввод параметров прямоугольника
    virtual void InRnd();
    // Вывод параметров прямоугольника в форматируемый поток
    virtual void Out(ofstream &ofst);
    // Вычисление периметра прямоугольника
    virtual double Area();
private:
    int x1, y1, radius;
};


#endif //HW2__CIRCLE_H_
