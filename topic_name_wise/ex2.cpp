#include <iostream>

using namespace std;

int main()
{
    int i = -1, j = -1, k = 0, l = 2, m;
    m = i++ && j++ && k++ && l++;
    cout << i << j << k << l << m;
}