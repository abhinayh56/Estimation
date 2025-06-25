#ifndef MVUE_3_H_BLUE_3_H
#define MVUE_3_H_BLUE_3_H

template <typename T>
class MVUE_3
{
public:
    MVUE_3();
    ~MVUE_3();
    void init(T var_1_, T var_2_, T var_3_);
    void set_param(T var_1_, T var_2_, T var_3_);
    T update(T x1_i, T x2_i, T x3_i);
    void reset();

private:
    T var_1 = 0.0;
    T var_2 = 0.0;
    T var_3 = 0.0;
};

#include "MVUE_3.tpp"

#endif // MVUE_3_H_BLUE_3_H
