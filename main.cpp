#include <iostream>
#include "function.cpp"
#include "Header.h"

using namespace std;

int main()
{
    aktsiinyi_tovar banan;
    aktsiinyi_tovar kivi(50, "Kivi", 300, 150, 15, "D&G", 2018, 22233);
    aktsiinyi_tovar apple(20, "Apple", 10, 8, 228, "SAMSUNG", 2000, 55664);
    cout<<"name : "<<banan.get_name()<<"\n sale : "<<banan.get_sale()<<"\n first price :  "<<banan.get_first_prise()<<"\n prise with sale : "<<banan.get_prise_with_sale()<<"\n nomber :  "<<banan.get_nomber()<<"\n brand : "<<banan.get_brand()<<"\n year : "<<banan.get_year()<<"\n code : "<<banan.get_code()<<endl;
    cout<<"\n name : "<<kivi.get_name()<<"\n sale : "<<kivi.get_sale()<<"\n first price : "<<kivi.get_first_prise()<<"\n prise with sale : "<<kivi.get_prise_with_sale()<<"\n nomber : "<<kivi.get_nomber()<<"\n brand : "<<kivi.get_brand()<<"\n year : "<<kivi.get_year()<<"\n code : "<<kivi.get_code()<<endl;
    cout<<"\n name : "<<apple.get_name()<<"\n sale : "<<apple.get_sale()<<"\n first price :  "<<apple.get_first_prise()<<"\n prise with sale : "<<apple.get_prise_with_sale()<<"\n nomber :  "<<apple.get_nomber()<<"\n brand : "<<apple.get_brand()<<"\n year : "<<apple.get_year()<<"\n code : "<<apple.get_code()<<endl;
    
    return 0;
}
