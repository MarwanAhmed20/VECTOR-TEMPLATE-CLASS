//Marwan Ahmed Ebrahim
//20180267
#ifndef FCIVECTOR_H
#define FCIVECTOR_H
#include<string>
using namespace std;
template<class t>
class FCIvector {
    t* arr;
    int capacity;
    int size;

public:

    FCIvector()
    {
        arr = new t[1];
        capacity = 4;
        size = 0;
    }
    ~FCIvector()
    {
        delete arr;
    }

    // Function to add an element at the last
    void AddE(t elements);
    // function to delete last element
    void removelast();
    // function to add element at any position
    void insertp(t elements, t* position);
    // function to delete element from any position
    void eraseP(t* position);
    // function to Display first element
    t& Displayfirst();
    // function to Display last element
    t& Displylast();
    // function to display element from any position
    t& operator[](int index);
    // function to get size
    int DisplaySize();
    // function to get capacity
    int DisplayCapacity();
    // function to check array is empty
    bool IsEmpty();
    // function to clear
    void clear();
    t* Begin();

};
template<class t>
void FCIvector<t>::AddE(t elements)
    {

        if (capacity<size){
            throw 1;
        }
       /* if (size == capacity) {
            t* temp = new t[2 * capacity];
            // copying old array elements to new array
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
            // deleting previous array
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }*/
        // Inserting data
        arr[size] = elements;
        size++;
    }
    // function to delete last element
template<class t>
void FCIvector<t>::removelast()
    {
        if (size==0){
            throw 2;}
        size--;
    }
    // function to add element at any position
template<class t>
void FCIvector<t>::insertp(t elements, t* position)
    {
        int index;
        for (int i=0 ; i<size ; i++)
        {
            if (arr+i == position){
                index = i;
                break;
            }
        }
        if (size == capacity) {
            t* temp = new t[2 * capacity];
            // copying old array elements to new array
            for (int i = 0; i < capacity; i++) {
                temp[i] = arr[i];
            }
            // deleting previous array
            delete[] arr;
            capacity *= 2;
            arr = temp;
        }
        for (int i=size ; i>index ; i--)
        {
            arr[i]=arr[index-1];
        }
        arr[index] = elements;
        size++;
    }
    // function to delete element from any position
template<class t>
void FCIvector<t>::eraseP(t* position)
    {
        int index;
        for (int i=0 ; i<size ; i++)
        {
            if (arr+i == position){
                index = i;
                break;
            }
        }
        for (int i=index ; i<size ; i++)
        {
            arr[i]=arr[index+1];
        }
        size--;
    }
    // function to clear
template<class t>
void FCIvector<t>::clear()
    {
        size=0;
    }
template<class t>
t* FCIvector<t>::Begin()
    {
        return arr;
    }
    // function to Display first element
template<class t>
t& FCIvector<t>::Displayfirst()
    {
        return arr[0];
    }
    // function to Display last element
template<class t>
t& FCIvector<t>::Displylast()
    {
        return arr[size-1];
    }
    // function to display element from any position
template <class t>
t& FCIvector<t>::operator[](int index)
{
    if (index < size)
        return arr[index];
}

    // function to get size
template<class t>
int FCIvector<t>::DisplaySize()
    {
        return size;
    }
    // function to get capacity
template<class t>
int FCIvector<t>::DisplayCapacity()
    {
        return capacity;
    }
    // function to check array is empty
template<class t>
bool FCIvector<t>::IsEmpty()
    {
        if(size==0)
            return true;
        else
            return false;
    }
    // function to print array elements

#endif
