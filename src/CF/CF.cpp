#include "CF.h"

template <typename T>
CF<T>::CF()
{
}

template <typename T>
CF<T>::~CF()
{
}

template <typename T>
void CF<T>::init(T alpha_)
{
    alpha = alpha_;
}

template <typename T>
void CF<T>::set_param(T alpha_)
{
    alpha = alpha_;
}

template <typename T>
T CF<T>::update(T x1_i, T x2_i)
{
    return alpha * x1_i + (1.0 - alpha) * x2_i;
}

template <typename T>
void CF<T>::reset()
{
    y_i = 0.0;
}

template <typename T>
void CF<T>::set_alpha(T alpha_)
{
    alpha = alpha_;
}

template <typename T>
T CF<T>::get_alpha()
{
    return alpha;
}
