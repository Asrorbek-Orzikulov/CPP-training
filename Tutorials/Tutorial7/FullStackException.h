#ifndef _FULL_STACK_EXCEPTION_H_
#define _FULL_STACK_EXCEPTION_H_

class FullStackException: public std::exception {
public:
    FullStackException() = default;
    ~FullStackException() = default;
    virtual const char *what() const noexcept override {
        return "The stack is already full!";
    }
};

#endif // _FULL_STACK_EXCEPTION_H_
