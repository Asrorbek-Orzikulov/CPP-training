#ifndef _INCORRECT_WITHDRAWAL_EXCEPTION_H_
#define _INCORRECT_WITHDRAWAL_EXCEPTION_H_

class IncorrectWithdrawalException: public std::exception {
public:
    IncorrectWithdrawalException() = default;
    ~IncorrectWithdrawalException() = default;
    virtual const char *what() const noexcept override  {
        return "Too frequent or too large withdrawal";
    }
};

#endif // _INCORRECT_WITHDRAWAL_EXCEPTION_H_
