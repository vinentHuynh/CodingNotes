#include <iostream>
#include "car.h"
using namespace std;

int main(){
    int userYear;
    int userPrice;
    int userCurrentMake;
    Car myCar;
    cin >> userYear;
    cin >> userPrice;
    cin >> userCurrentMake;
    myCar.setModelYear(userYear);
    myCar.setPurchasePrice(userPrice);
    myCarCalcCurrentValue(userCurrentMake);
    myCar.PrintInfo();
    return 0;
    

}