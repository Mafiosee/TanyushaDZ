#include <iostream>
#include <windows.h>
#include <vector>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string str;
    std::cout << "ДЗ №3 : )\n" << "Введіть будь-ласка будь-яке слово : ";
    std::cin >> str;
    std::cout << "В слові '" + str + "' " << foo(str) << " голосних букв.\n";
}

std::string vowels = "АЕЄИІЇОУЮЯаеєиіїоуюя";

int foo(std::string str)
{
    int result = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (std::find(vowels.begin(), vowels.end(), str[i]) == vowels.end())
            continue;

        result++;
    }
    return result;
}