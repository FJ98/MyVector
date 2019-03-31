#ifndef MYVECTOR_MYVECTOR_H
#define MYVECTOR_MYVECTOR_H
namespace UTEC{
    class vector {
        int* _arr;
        int _size;
    public:
        vector();
        ~vector();
        void push_back(const int& value);
        void pop_back();
        void insert(int pos, const int& value);
        int get_item(int i);
        int size();
    };
}
#endif //MYVECTOR_MYVECTOR_H