#ifndef COMPLIMENTARY_FILTER
#define COMPLIMENTARY_FILTER

template <typename T>
class CF
{
public:
    CF();
    ~CF();
    void init(T alpha_);
    void set_param(T alpha_);
    T update(T x1_i, T x2_i);
    void reset();
    void set_alpha(T alpha_);
    T get_alpha();

private:
    T alpha = 0.0;
    T y_i = 0.0
};

#include "CF.h"

#endif // COMPLIMENTARY_FILTER
