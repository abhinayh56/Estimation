#include <iostream>
#include "./src/Estimation.h"

int main()
{
    MVUE_4<double> mvue;
    mvue.init(4, 5, 6, 7);

    std::cout << mvue.update(100,200, 150, 300) << std::endl;

    return 0;
}
