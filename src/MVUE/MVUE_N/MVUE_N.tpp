#include "MVUE_N.h"

template <typename T, std::size_t N>
MVUE_N<T, N>::MVUE_N()
{
}

template <typename T, std::size_t N>
MVUE_N<T, N>::~MVUE_N()
{
}

template <typename T, std::size_t N>
void MVUE_N<T, N>::init(T *var_)
{
    set_param(var_);
}

template <typename T, std::size_t N>
void MVUE_N<T, N>::set_param(T *var_)
{
    var = var_;
}

template <typename T, std::size_t N>
T MVUE_N<T, N>::update(const T *x_i)
{
    T nominator = 0.0;
    T denominator = 0.0;

    for (int j = 0; j < N; j++)
    {
        nominator += x_i[j] / var[j];
        denominator += 1.0 / var[j];
    }

    return nominator / denominator;
}

template <typename T, std::size_t N>
void MVUE_N<T, N>::reset()
{
}
