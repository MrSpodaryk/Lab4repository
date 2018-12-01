#include <iostream>
#include "Header.h"

double aktsiinyi_tovar::get_sale()
{
    return sale;
}

string aktsiinyi_tovar::get_name()
{
    return name;
}

double aktsiinyi_tovar::get_first_prise()
{
    return first_prise;
}

double aktsiinyi_tovar::get_prise_with_sale()
{
    return prise_with_sale;
}

int aktsiinyi_tovar::get_year()
{
    return year;
}

int aktsiinyi_tovar::get_code()
{
    return code;
}

int aktsiinyi_tovar::get_nomber()
{
    return nomber;
}

string aktsiinyi_tovar::get_brand()
{
    return brand;
}

aktsiinyi_tovar::aktsiinyi_tovar()
: sale(30),
name("Banan"),
first_prise(1000),
sale_prise(700),
nomber(2423),
brand("ZARA"),
year(2019),
code(22017)
{
}

aktsiinyi_tovar::~aktsiinyi_tovar()
{
}
