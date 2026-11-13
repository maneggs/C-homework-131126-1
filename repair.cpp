#include <iostream>
#include <clocale>

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Тема введение пройдена." << std::endl;    // строка А
    std::cout << "Повторяем и проверяем себя." << std::endl;    // строка Б
    std::cout << "Впереди переменные и типы." << std::endl;

    return 0;
}


//Строка А: отсутсвовала точка с запятой
//Строка Б: std::cout вместо cuot
//Отсутствовала фигурная скобка в конце

//добавлена setlocale, чтобы исправить кодировку