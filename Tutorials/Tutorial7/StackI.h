#ifndef _STACK_I_H_
#define _STACK_I_H_

#include <vector>
using std::vector;

template <typename T>
class StackI {
public:
    virtual ~StackI() = default;
    virtual void push(T element) = 0;
    virtual void pop() = 0;
    virtual T top() const = 0 ;
    virtual bool isEmpty() const = 0;
    virtual void print() const = 0;
};

#endif // _STACK_I_H_
