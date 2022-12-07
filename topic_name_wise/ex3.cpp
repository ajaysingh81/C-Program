#include <iostream>

using namespace std;

int main()
{
    static int var = 5;
    cout << var--;
    if (var)
    {
        main();
    }
}