#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_

class IllegalBalanceException: public std::exception {
public:
    IllegalBalanceException() = default;
    ~IllegalBalanceException() = default;
    virtual const char *what() const noexcept override  {
        return "Negative balance: could not create an account";
    }
};

#endif // _ILLEGAL_BALANCE_EXCEPTION_H_