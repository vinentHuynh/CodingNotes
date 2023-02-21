#ifndef CARH
#define CARH
class Car
{
    private:
        int modelYear;
        double currentValue;
        double purchasePrice;
    public:
        void SetModelYear(int year);
        int GetModelYear() const;
        void SetPurchasePrice(double price);
        double GetPurchasePrice() const;
        void CalcCurrentValue(int currentYear);
        void PrintInfo() const;
};
#endif