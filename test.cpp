#include <iostream>
using namespace std;

int main()
{
    cout << "test 123" << endl;

    int x = 5;
    for(int i = 0; i < 10; i++)
    {
        x += i;
        if(x > 15)
        {
            x++;
        }
    }
    cout << "x: " << x << endl;
    return 0;
}