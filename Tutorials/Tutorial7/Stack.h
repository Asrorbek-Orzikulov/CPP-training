#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include "FullStackException.h"
#include "EmptyStackException.h"
#include "StackI.h"

using std::cout;
using std::endl;

template <typename T>
class Stack: public StackI<T> {
private:
    size_t max_size;
    size_t size;
    T *members;

public:
    Stack(size_t stack_size) : max_size {stack_size}, size {0}, members {nullptr} {
        members = new T[max_size] {};
    };
    Stack() : Stack {20} {}; // delegating constructor
    Stack(const Stack &rhs) : max_size {rhs.max_size}, size {rhs.size}, members {nullptr} {
        members = new T[max_size] {};
        for (size_t i{}; i<size; ++i)
            members[i] = rhs.members[i];
    };
    virtual ~Stack() { delete members; };
    virtual bool isEmpty() const override { return size == 0; };

    /*******************************************************************
    This method does not expect any arguments and returns the element 
    on the top of the Stack unless the Stack is empty. In this case,
    it throws an EmptyStackException.
    ********************************************************************/
    virtual T top() const override {
        if (size == 0)
            throw EmptyStackException {};
        return members[size-1];
    };

    /*******************************************************************
    This method expects an element of an arbitrary type and adds it to 
    the top of the Stack unless the Stack is full. In this case, it throws
    a FullStackException.
    ********************************************************************/
    virtual void push(T element) override {
        if (size == max_size)
            throw FullStackException {};
        members[size] = element;
        ++size;
    };

    /*******************************************************************
    This method does not expect any arguments and removes the element on 
    the top of the Stack unless the Stack is empty. In this case, it
    throws an EmptyStackException.
    ********************************************************************/
    virtual void pop() override {
        if (size == 0)
            throw EmptyStackException {};
        members[size-1] = 0;
        --size;
    }

    /*******************************************************************
    This method does not expect any arguments and displays the stack 
    elements in in the following order: the top of the stack will be 
    the leftmost element, and the bottom element will be the rightmost.
    ********************************************************************/
    virtual void print() const override {
        if (size == 0) {
            cout << "[]" << endl;
            return;
        }
        cout << "[";
        for (size_t i{size-1}; i>0; --i)
            cout << members[i] << ", ";
        cout << members[0] << "]" << endl;
    }
};

#endif // _STACK_H_
