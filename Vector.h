#ifndef VECTOR_H
#define VECTOR_H

#include "Figure.h"
#include "Pentagon.h"
#include "Trapeze.h"
#include "Rhombus.h"
#include <memory>

template <class T> class LolVector{
public:
    LolVector(int kek); //конструктор класса
    void Push(std::shared_ptr<T> &temp); //добавление элемента в класс
    void Get(int lol); //получение элемента класса
    void Delete(); //удаление поледнего элемента
    template <class A> friend std::ostream& operator<<(std::ostream& os, const LolVector<A>& vector); //вывод в стандартный поток
    void DeleteAll();
    ~LolVector(); //деструктор класса
    int GetSize(); // получение размера класса
private:
    void ResizeVector(std::shared_ptr<T> *&array); //изменение размера вектора
    int size; //текущее количество элементов
    int capacity; // выделенное место
    std::shared_ptr<T> *array; //массив
    
};

#endif