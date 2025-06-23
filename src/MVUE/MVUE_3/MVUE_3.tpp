#include "MVUE_3.h"

template <typename T>
MVUE_3<T>::MVUE_3()
{
}

template <typename T>
MVUE_3<T>::~MVUE_3()
{
}

template <typename T>
void MVUE_3<T>::init(T var_1_, T var_2_, T var_3_)
{
    set_param(var_1_, var_2_, var_3_);
}

template <typename T>
void MVUE_3<T>::set_param(T var_1_, T var_2_, T var_3_)
{
    var_1 = var_1_;
    var_2 = var_2_;
    var_3 = var_3_;
}

template <typename T>
T MVUE_3<T>::update(T x1_i, T x2_i)
{
    return ((x1_i / var_1) + (x2_i / var_2) + (x3_i / var_3)) / ((1.0 / var_1) + (1.0 / var_2) + (1.0 / var_3));
}

template <typename T>
void MVUE_3<T>::reset()
{
}
