#ifndef _EMPTY_STACK_EXCEPTION_H_
#define _EMPTY_STACK_EXCEPTION_H_

class EmptyStackException: public std::exception {
public:
    EmptyStackException() = default;
    ~EmptyStackException() = default;
    virtual const char *what() const noexcept override {
        return "The stack is empty!";
    }
};

#endif // _EMPTY_STACK_EXCEPTION_H_
