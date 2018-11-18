#include <iostream>
#include "Header.h"

double ak_tovar::get_sale()
{
    return sale;
}

string ak_tovar::get_name()
{
    return name;
}

double ak_tovar::get_first_prise()
{
    return first_prise;
}

double ak_tovar::get_sale_prise()
{
    return sale_prise;
}

int ak_tovar::get_year()
{
    return year;
}

int ak_tovar::get_code()
{
    return code;
}

int ak_tovar::get_nomber()
{
    return nomber;
}

string ak_tovar::get_brand()
{
    return brand;
}

ak_tovar::ak_tovar()
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

ak_tovar::~ak_tovar()
{
}
