#include <iostream>
#include <windows.h>

bool foo(int num)
{
    return num%2 == 0;
}

void func()
{
    int num;

    std::cout << "ДЗ №2 :)\n";
    std::cout << "Введіть будь-ласка число: ";
    std::cin >> num;
    if (foo(num)) std::cout << "Число парне :)\n";
    else std::cout << "Число непарне :)\n";
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    while (true)
    {
        func();
        Sleep(1000);
    }
}