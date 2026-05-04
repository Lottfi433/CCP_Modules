#pragma once

#include <stdexcept>

template <typename T>
class Array {
private:
    T* data;
    unsigned int _size;
public:
    Array();
    Array(unsigned int n);
    Array(const Array &other );
    Array &operator=(const Array &other);
    ~Array();
    T &operator[](unsigned int index);
    const T &operator[](unsigned int index) const;
    unsigned int size() const;
};

template <typename T>
Array<T>::Array() : data(NULL),_size(0) {}
template <typename T>
Array<T>::Array(unsigned int n) : _size(n){
    data = new T[n];
}

template <typename T>
Array<T>::~Array(){
    delete[] data;
}

template <typename T>

unsigned int Array<T>::size()const{
    return _size;
}
template <typename T>
T   &Array<T>::operator[](unsigned int index){
    if (index >= _size)
        throw std::out_of_range ("Index out of range");
    return data[index];
}
template <typename T>
const T &Array<T>::operator[](unsigned int index) const{
    if (index >= _size)
        throw std::out_of_range("Index out of range");
    return data[index];
}
template <typename T>
Array<T>::Array(const Array &other){
    _size = other._size;
    data = new T[_size];
    for ( int i = 0; i < _size; i++)
        data[i] = other.data[i];
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &other){
    if (this == &other)
        return *this;
    delete[] data;
    _size = other._size;
    data = new T[_size];

    for (int i = 0; i < _size; i++)
        data[i] = other.data[i];
    return *this;
}