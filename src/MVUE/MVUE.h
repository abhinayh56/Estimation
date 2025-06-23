#ifndef BLUE_H_MVUE_H
#define BLUE_H_MVUE_H

#include "../../../Constants/src/Constants.h"

template <typename T>
class MVUE
{
public:
    MVUE();
    ~MVUE();
    void init(T fc_, T dt_);
    void set_param(T fc_, T dt_);
    T update(T x1_i, T x2_i);
    void reset();

    void set_fc(T fc_);
    void set_tau(T tau_);
    void set_dt(T dt_);
    void set_alpha(T alpha_);

    T get_fc();
    T get_tau();
    T get_dt();
    T get_alpha();

private:
    T fc = 0.0;
    T tau = 0.0;
    T dt = 0.0;
    T alpha = 0.0;
};

#include "MVUE.tpp"

#endif // BLUE_H_MVUE_H
