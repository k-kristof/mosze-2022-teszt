#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // Hibás változó név
    int *b = new int[NELEMENTS];
    // Hibás cout szintaxis
    std::cout << '1-100 ertekek duplazasa'
    // Befejezetlen for ciklus
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    // Befejezetlen for ciklus
    for (int i = 0; i; i++)
    {
        // Hibás cout szintaxis
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // Inicializálatlan változó
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
