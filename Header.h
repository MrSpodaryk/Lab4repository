#pragma once
#include <iostream>
#include <string>

using namespace std;

class aktsiinyi_tovar
{
private:
    double sale;
    string name;
    double first_prise;
    double prise_with_sale;
public:
    aktsiinyi_tovar();
    aktsiinyi_tovar(double sal, string nam, double first_pris, double prise_with_sal, int nombe, string bran, int yea, int cod)
    : sale(sal),
    name(nam),
    first_prise(first_pris),
    prise_with_sale(prise_with_sal),
    nomber(nombe),
    brand(bran),
    year(yea),
    code(cod)
    {
    }
    ~aktsiinyi_tovar();
    double get_sale();
    string get_name();
    double get_first_prise();
    double get_prise_with_sale();
    int get_year();
    int get_code();
    int get_nomber();
    string get_brand();
    int nomber;
    string brand;
protected:
    int year;
    int code;
};
