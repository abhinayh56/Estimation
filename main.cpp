#include <iostream>
#include "./src/Estimation.h"

int main()
{
    double var_arr[4] = {4, 5, 6, 7};
    double x_arr[4] = {100, 200, 150, 300};

    MVUE_N<double, 4> mvue;
    mvue.set_param(var_arr);

    std::cout << mvue.update(x_arr) << std::endl;

    return 0;
}
