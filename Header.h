#pragma once
#include <iostream>
#include <string>

using namespace std;

class ak_tovar
{
private:
    double sale;
    string name;
    double first_prise;
    double sale_prise;
public:
    ak_tovar();
    ak_tovar(double sal, string nam, double first_pris, double sale_pris, int nombe, string bran, int yea, int cod)
    : sale(sal),
    name(nam),
    first_prise(first_pris),
    sale_prise(sale_pris),
    nomber(nombe),
    brand(bran),
    year(yea),
    code(cod)
    {
    }
    ~ak_tovar();
    double get_sale();
    string get_name();
    double get_first_prise();
    double get_sale_prise();
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
