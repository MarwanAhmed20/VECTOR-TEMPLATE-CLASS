/*#include "FCIvector.h"
#include<iostream>
using namespace std;
template<class t>
void FCIvector<t>::AddE(t elements)
    {
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
        // Inserting data
        arr[size] = elements;
        size++;
    }
    // function to delete last element
template<class t>
void FCIvector<t>::removelast()
    {
        size--;
    }
    // function to add element at any position
template<class t>
void FCIvector<t>::insertp(t elements, t* position)
    {
        // if index is equal to capacity then this
        // function is same as push defined above
            arr[position] = elements;
    }
    // function to delete element from any position
template<class t>
void FCIvector<t>::eraseP(t* position)
    {
        if(position>size)
            cout<<"This value is out of range"<<endl;
        else{
            --position;
            for(t i=position;i<size;i++){
                arr[i]=arr[i+1];
            }
        }
    }
    // function to clear
template<class t>
void FCIvector<t>::clear()
    {
        size=0;
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
t FCIvector<t>::DisplaySize()
    {
        return size;
    }
    // function to get capacity
template<class t>
t FCIvector<t>::DisplayCapacity()
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
    }*/
    // function to print array elements

