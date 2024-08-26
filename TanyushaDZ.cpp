#include <iostream>
#include <vector>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "ДЗ №1 :)\n";
    std::cout << "Дано числа: ";
    std::vector<int> arr = {1,2,3,4,5,6,7,8,9,22,33,12,56,32,13,51,18,19};
    std::vector<int> odd_nums = foo(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i];
        if (i != arr.size()-1) std::cout << ", ";
        else std::cout << ".\n";
    }

    std::cout << "Із них непарні: ";

    for (int j = 0; j < odd_nums.size(); j++)
    {
        std::cout << odd_nums[j];
        if (j != odd_nums.size() - 1) std::cout << ", ";
        else std::cout << ".";
    }
}

std::vector<int> foo(std::vector<int> nums)
{
    std::vector<int> result = {};
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
            continue;

        result.push_back(nums[i]);
    }
    return result;
}