#include <iostream>
#include <iomanip>
#include <cmath>
#include "car.h"
using namespace std;

void Car::SetModelYear(int year){
    modelYear = year;
}
int Car::GetModelYear() const{
    return modelYear;
}

void Car::SetPurchasePrice(double price){
    purchasePrice =price;
}

double Car::GetPurchasePrice() const{
    return purchasePrice;
}
void Car::CalcCurrentValue(int currentYear)
{
    double depreciatedRate = 0.15;
    int carAge = currentYear-modelYear;
    currentValue = purchasePrice * pow((1-depreciatedRate),carAge);
}

void Car::PrintInfo() const{
    cout << "Model Year: " << modelYear << endl;
    cout << "Purchase Price: " << purchasePrice << endl;
    cout << "Current Value: " << currentValue << endl;
}