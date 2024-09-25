#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //ERROR N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' //ERROR -> Missing ;
    for (int i = 0;) //ERROR -> Wrong for loop
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //ERROR -> Wrong for loop
    {
        std::cout << "Ertek:" //ERROR -> Missing ; and value
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) //ERROR -> Wrong for loop
    {
        atlag += b[i] //ERROR -> Missing ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
