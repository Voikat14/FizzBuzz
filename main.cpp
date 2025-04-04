#include <iostream>
#include "display.h"

using namespace std;

int main()
{
    for(int i=1; i<=150; i++)
    {
        if(i%3==0)
        {
            cout<<"Fizz"<<endl;
        }
        else
        {
            cout<<"Zahl: "<<i<<endl;
        }
    }
    return 0;
}
