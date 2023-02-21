#include <iostream>

#include "VendingMachine.h"

using namespace std;

int main()
{
    VendingMachine vm(5,2);
    cout << vm.Stock;
    return 0;
}