#include <iostream>

using namespace std;

template<typename T>
void fn(T &ref)
{
    cout << "ref   : " << ref << endl;
    cout << "&ref  : " << &ref << endl;
    cout << "*&ref : " << *(&ref) << endl;

    T *addr = &ref;

    for(int i=0; i<4;i++)
    {
        cout << i << " : " << *addr << endl;
        addr++;
    }
}

int main()
{
    float var[4] = {1238, 4, 5, 75};
    float &var_ref = var[0];

    fn<float>(var_ref);

    return 0;
}
