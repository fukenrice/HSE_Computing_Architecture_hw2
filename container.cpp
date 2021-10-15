//
// Created by rhy on 14.10.2021.
//

#include "container.h"
#include <iostream>
//------------------------------------------------------------------------------
// Конструктор контейнера
Container::Container(int s): len{0}, size{s} {
    storage = new Shape*[s];
}

//------------------------------------------------------------------------------
// Деструктор контейнера
Container::~Container() {
    Clear();
    delete[] storage;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear() {
    for(int i = 0; i < len; i++) {
        delete storage[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements.\n";
    for (int i = 0; i < len; i++) {
        ofst << i << ": ";
        storage[i]->Out(ofst);
    }

}
//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void Container::In(ifstream &ifst) {
    while(!ifst.eof()) {
        if((storage[len] = Shape::StaticIn(ifst)) != 0) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void Container::InRnd(int s) {
    if(s > size) {
        s = size;
    }
    while(len < s) {
        if((storage[len] = Shape::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

// Сортировка контейнера алгоритмом Шелла
void Container::ShellSort(){
    int d = len / 2;
    while (d != 0){
        for (int i = d; i < len; i += d) {
            int j = i;
            while (j > 0 && (storage[j - d]->Area()) > (storage[j]->Area())){
                std::swap(storage[j - d], storage[j]);
                j -= d;
            }
        }
        d /= 2;
    }
}

