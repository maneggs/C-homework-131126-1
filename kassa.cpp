#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string ender;

    int duration, price, count, paid;

    cout << "Minuta, tsena, bilety, vneseno: ";
    cin >> duration >> price >> count >> paid;

    int hours = duration / 60;
    int minutes = duration % 60;

    int total = price * count;
    int change = paid - total;

    cout << "seans: " << hours << " ch " << minutes << " min" << endl;
    cout << "K oplate; " << total << endl;
    cout << "Sdacha: " << change << endl;
    cout << "Sdacha: " << change << ". Spasibo!" << endl;

    std::cin >> ender;

    return 0;
}
