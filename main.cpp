#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hibás változó név
    int *b = new int[N_ELEMENTS];
    // Hibás cout szintaxis
    std::cout << "1-100 ertekek duplazasa" << std::endl;
    // Befejezetlen for ciklus
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }
    // Befejezetlen for ciklus
    for (int i = 1; i <= N_ELEMENTS; i++)
    {
        // Hibás cout szintaxis
        std::cout << "Ertek: " << b[i] << "\n";
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // Inicializálatlan változó
    int atlag = 0;
    for (int i = 0; i <= N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
