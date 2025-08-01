#ifndef MVUE_N_H_BLUE_4_H
#define MVUE_N_H_BLUE_4_H

#include <cstddef>

template <typename T, std::size_t N>
class MVUE_N
{
public:
    MVUE_N();
    ~MVUE_N();
    void init(T *var_);
    void set_param(T *var_);
    T update(const T *x_i);
    void reset();

private:
    T *var;
};

#include "MVUE_N.tpp"

#endif // MVUE_N_H_BLUE_4_H
