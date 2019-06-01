#include "Vector.h"
#include <iostream>
#include <vector>
//int* _arr;
//int _size == capacity;
namespace UTEC {
    void vector::push_back(const int &value) {
        // Completarlo
        int* temp = new int[_size + 1];
        for(int i = 0; i < _size; i++)
            temp[i] = _arr[i];
        delete[] _arr;
         _arr=temp;

        _arr[_size]=value;
        _size++;
    }

    void vector::pop_back() {
        // Completarlo
        if(_size > 0){_size--;}
    }
    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
        // Completarlo
        delete [] _arr;
        _arr= nullptr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}

    void vector::insert(int pos, const int &value) {

    }
}