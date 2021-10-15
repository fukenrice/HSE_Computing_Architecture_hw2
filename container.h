//
// Created by rhy on 14.10.2021.
//

#ifndef HW2__CONTAINER_H_
#define HW2__CONTAINER_H_

#include "shape.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class Container {
public:
    Container(int s);
    ~Container();

    // Ввод содержимого контейнера из указанного потока
    void In(ifstream &ifst);
    // Случайный ввод содержимого контейнера
    void InRnd(int size);
    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream &ofst);
    // Вычисление суммы периметров всех фигур в контейнере
    void ShellSort();
private:
    void Clear();    // Очистка контейнера от данных
    int len; // текущая длина
    Shape** storage;
    int size;
};


#endif //HW2__CONTAINER_H_
