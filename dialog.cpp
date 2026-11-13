#include <iostream>
#include <string>

int main()
{
    std::string name;
    std::string ender;
    int birthYear;

    std::cout << "Kak vas zovut? ";
    std::cin >> name;
    std::cout << "V kakom godu vy rodilis?? ";
    std::cin >> birthYear;
    std::cout << "Preevet, " << name << "!" << std::endl;
    std::cout << "Vam primerno " << 2026 - birthYear << " let." << std::endl;

    std::cin >> ender;

    return 0;
}
